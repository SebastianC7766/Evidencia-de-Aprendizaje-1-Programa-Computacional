#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validar_cadena();

int main()
{
    int i = 0;

    while (validar_cadena()==0){}

    return 0;
}

// Retorna 0 si es invalida. Retorna 1 si es valida
int validar_cadena()
{    
    int i = 0, j = 0, valida, en_alfabeto;
    char alfabeto[] = {'s', 'e', 'b', 'a', 't', 'i', 'n', 'c', 'l', 'd', 'r', 'o', '2', '0', '8', '7', '4', '.'};
    char cadena[100];
    
    // Imprimir nombre, matricula y alfabeto
    system("cls");
    printf("Nombre: Sebastian Calderon Carrillo\nMatricula: 2087472\nAlfabeto: {");
    for (i = 0; i < sizeof(alfabeto) - 1; i++)
    {
        printf("%c,", alfabeto[i]);
    }
    printf("%c}\n\n", alfabeto[sizeof(alfabeto) - 1]);

    // Solicitar cadena
    printf("Ingrese una cadena para verificar: ");
    gets(cadena);

    // Recorrer y comprobar que toda la cadena este en el alfabeto
    valida = 1;
    while (cadena[j] != '\0' && valida != 0)
    {
        en_alfabeto = 0;
        for (i = 0; i < sizeof(alfabeto); i++)
        {
            // Comprueba que si este en el alfabeto
            if (cadena[j] == alfabeto[i])
            {
                en_alfabeto = 1;
                break;
            }
        }
        if (en_alfabeto != 1)
        {
            valida = 0;
            break;
        }
        j++;
    }
    j = 0;
    if (valida == 1)
    {
        printf("Cadena en alfabeto.\n");

        // QUITAR DESPUES
        system("pause");
    }
    else
    {
        printf("Cadena invalida.\n");
        system("pause");
        return valida;
    }
    
    // Recorrer y comprobar que cumpla el patron
    
    
    // Return final
    return valida;
}