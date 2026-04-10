# 📂 Act.Und.1.Jesus.EstructuraDeDatos

Este repositorio contiene el desarrollo integral de la **Unidad 1 de Estructura de Datos**, enfocado en la comparativa técnica entre la programación estructurada y la programación orientada a objetos (POO).

## 🚀 Descripción del Proyecto
El objetivo principal es demostrar el manejo de información mediante **Structs** y **Objetos**, analizando su comportamiento en memoria, sintaxis y utilidad en la Ingeniería de Software.

---

## 🛠️ Tecnologías Utilizadas
* **IDE:** IntelliJ IDEA
* **Lenguajes:** * **C** (Enfoque en eficiencia y manejo de Stack)
    * **C++** (Enfoque en POO y abstracción)
* **Control de Versiones:** Git & GitHub

---

## 📊 5. Tabla Comparativa: Struct vs Objeto

Como parte del análisis teórico-práctico solicitado, se presenta la siguiente comparativa:

| Característica | Struct (C) | Objeto/Clase (C++) |
| :--- | :--- | :--- |
| **Definición** | Contenedor pasivo de datos. | Entidad activa con datos y métodos. |
| **Encapsulamiento** | No posee (todo es público). | Posee niveles de acceso (private/public). |
| **Uso en Memoria** | Típicamente en el **Stack**. | Típicamente en el **Heap** (vía punteros). |
| **Mutabilidad** | Directa y sin restricciones. | Controlada mediante métodos (Setters). |
| **Paradigma** | Programación Estructurada. | Programación Orientada a Objetos (POO). |

---

## 📁 Estructura del Repositorio

### 1. Estructuras y Records (Punto 3)
Implementación de un registro básico de estudiantes: nombre, edad y promedio.
* **C:** Uso de `typedef struct` y arreglos estáticos de caracteres.
* **C++:** Uso de `struct` moderno con soporte para `std::string` y contenedores `std::vector`.

### 2. Objetos e Instancias (Punto 4)
Modelado de la entidad `Estudiante` con métodos de comportamiento.
* **C:** Simulación de objetos mediante **punteros a funciones** dentro de estructuras.
* **C++:** Implementación de `class` con constructores, métodos de acceso y encapsulamiento de datos.

### 3. Proyecto Integrador: Analizador de Archivos Numéricos
*(Ejercicio 6 de la Actividad Individual)*
Este módulo lee datos desde un archivo externo, procesa estadísticas (Min, Max, Promedio) y exporta los resultados ordenados.
* **Componente C:** Gestión de persistencia con `FILE*` y algoritmos de ordenamiento `Bubble Sort`.
* **Componente C++:** Uso de `fstream` para I/O de archivos y `std::sort` para optimización de procesos.

---

## 💡 Reflexión de Ingeniería
Durante el desarrollo se evidenció que mientras **C** ofrece un control granular y directo sobre la memoria (Stack), **C++** permite una mayor productividad y seguridad a través del encapsulamiento, evitando la corrupción de datos accidentales mediante el uso de métodos `set` y `get`.

---

## 👤 Autor
* **Nombre:** Jesus
* **Carrera:** Ingeniería de Software
* **Institución:** Universidad de Cartagena / Universidad Rafael Núñez

---

### 💻 Instrucciones de Ejecución
Para compilar los módulos desde la terminal integrada de IntelliJ:

**Para C:**
```bash
gcc analizador.c -o analizador_c
./analizador_c