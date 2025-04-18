#include <iostream>
#include <mutex>

class Singleton {
public:
    // Devuelve una referencia a la única instancia de la clase
    static Singleton& getInstance() {
        static Singleton instance; // Garantizado que se crea solo una vez (desde C++11)
        return instance;
    }

    // Ejemplo de método público
    void sayHello() {
        std::cout << "¡From Singleton!" << std::endl;
    }

    // Eliminar funciones de copia y asignación
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    // Constructor privado para evitar creación externa
    Singleton() {
        std::cout << "Constructor Singleton\n";
    }
};