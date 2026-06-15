FROM ubuntu:22.04 AS builder

RUN apt-get update && apt-get install -y \
    cmake \
    g++ \
    make \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY CMakeLists.txt .
COPY src/ src/
COPY include/ include/
COPY tests/ tests/

RUN cmake -S . -B build -DCMAKE_BUILD_TYPE=Release \
    && cmake --build build --parallel \
    && ctest --test-dir build --output-on-failure

FROM ubuntu:22.04

WORKDIR /app

COPY --from=builder /app/build/sorting_visualizer /app/
COPY --from=builder /app/build/scenario_bubble    /app/
COPY --from=builder /app/build/scenario_selection /app/
COPY --from=builder /app/build/scenario_insertion /app/
COPY --from=builder /app/build/scenario_quick     /app/
COPY --from=builder /app/build/scenario_merge     /app/
COPY --from=builder /app/build/scenario_error     /app/
COPY --from=builder /app/build/scenario_perf      /app/
COPY --from=builder /app/build/unit_tests         /app/

ENTRYPOINT ["./sorting_visualizer"]