struct EFecha
{
    int dia;
    int mes;
    int anio;
};

typedef struct{
    char nombre[30];
    char apellido[30];
    struct EFecha fechaNac; /// Estrucutra anidada
} EPersona;
