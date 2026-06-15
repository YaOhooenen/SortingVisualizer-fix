# Визуализатор алгоритмов сортировки

## Краткая суть проекта

Консольное приложение на C++ для наглядной демонстрации работы 5 алгоритмов сортировки. Массив чисел отображается в виде столбцов, каждый шаг сортировки визуализируется в реальном времени.

## Алгоритмы

- Сортировка пузырьком (Bubble Sort)
- Сортировка выбором (Selection Sort)
- Сортировка вставками (Insertion Sort)
- Быстрая сортировка (Quick Sort)
- Сортировка слиянием (Merge Sort)

---

## Инструкция по сборке (CMake)

#### Windows (Visual Studio)
```bash
cmake -S . -B build
cmake --build build
build\Debug\sorting_visualizer.exe
```

### Исправление кодировки
```bash
chcp 65001
```

### Запуск тестов
```bash
build\Debug\unit_tests.exe
```

### Запуск сценариев
```bash
build\Debug\scenario_bubble.exe
build\Debug\scenario_selection.exe
build\Debug\scenario_insertion.exe
build\Debug\scenario_quick.exe
build\Debug\scenario_merge.exe
build\Debug\scenario_error.exe
build\Debug\scenario_perf.exe
```

---

## Запуск через Docker

### Требования
- Docker установлен на системе

### Сборка образа
```bash
docker compose up --build  
```

### Запуск основной программы
```bash
docker compose run --rm sorting-visualizer
```

### Запуск тестов
```bash
docker compose run --rm tests
```

### Запуск сценариев
```bash
docker compose run --rm scenario-bubble
docker compose run --rm scenario-selection
docker compose run --rm scenario-insertion
docker compose run --rm scenario-quick
docker compose run --rm scenario-merge
docker compose run --rm scenario-error
docker compose run --rm scenario-perf
```