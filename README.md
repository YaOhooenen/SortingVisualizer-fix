# Визуализатор алгоритмов сортировки

## Краткая суть проекта

Консольное приложение на C++ для наглядной демонстрации работы 5 алгоритмов сортировки. Массив чисел отображается в виде столбцов, каждый шаг сортировки визуализируется в реальном времени. Иус Владимир ЭФБО-06-24.

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
```
```bash
cmake --build build
```
```bash
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
```
```bash
build\Debug\scenario_selection.exe
```
```bash
build\Debug\scenario_insertion.exe
```
```bash
build\Debug\scenario_quick.exe
```
```bash
build\Debug\scenario_merge.exe
```
```bash
build\Debug\scenario_error.exe
```
```bash
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
```
```bash
docker compose run --rm scenario-selection
```
```bash
docker compose run --rm scenario-insertion
```
```bash
docker compose run --rm scenario-quick
```
```bash
docker compose run --rm scenario-merge
```
```bash
docker compose run --rm scenario-error
```
```bash
docker compose run --rm scenario-perf
```
