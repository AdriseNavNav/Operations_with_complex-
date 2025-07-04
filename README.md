# Plantilla C++

Este es un proyecto base para trabajar con C++ en Visual Studio Code, con una estructura organizada por carpetas y tareas automatizadas.

---

## Requisitos

1. Tener instalado **MinGW**.
2. Tener instalado **Visual Studio Code**.
3. Instalar la extensión **C/C++** para VS Code.

---

## Clonar el repositorio

Debes tener instalado **Git**:

1. Abre una terminal (por ejemplo, `cmd`).
2. Ve a la carpeta donde deseas almacenar tu proyecto:

   ```bash
   cd "[RUTA_DE_LA_CARPETA]"
   ```
3. Clona el repositorio:

   ```bash
   git clone [URL_DEL_REPOSITORIO]
   ```
4. Entra a la carpeta del proyecto:

   ```bash
   cd "Plantilla-C++"
   ```
5. Abre Visual Studio Code:

   ```bash
   code .
   ```

---

## Estructura del proyecto

```text
Plantilla-C++/
│
├── include/        # Archivos `.h` (declaraciones)
├── src/            # Archivos `.cpp` (implementación) y `main.cpp`
├── build/          # Ejecutables y archivos objeto
├── libs/           # Librerías de terceros o propias
├── .vscode/        # Configuración de tareas y depuración
│   └── tasks.json
├── README.md       # Este archivo
└── .gitignore      # Ignora archivos no deseados en Git
```

---

## Compilación y ejecución

Para compilar y ejecutar, presiona:

```text
Ctrl + Shift + B
```

Esto ejecutará la tarea por defecto (`Compilar y ejecutar`) que:

* Busca los headers en `include/`.
* Compila todos los `.cpp` de `src/`.
* Genera el ejecutable `main.exe` en `build/`.
* Lanza automáticamente `main.exe`.

---

## Notas

* El ejecutable final se llama `main.exe` y se encuentra en la carpeta `build/`.
* Si necesitas agregar dependencias, colócalas en `libs/` y ajusta tus rutas de compilación.

---

## Enlaces útiles

* [Documentación de C++ (cppreference)](https://en.cppreference.com/)
* [Guía de Git](https://git-scm.com/doc)

---

## Licencia

Este proyecto está bajo la licencia MIT. Consulta el archivo `LICENSE` para más detalles.

---

© 2025 Adrián Navarro