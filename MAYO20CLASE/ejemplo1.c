#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char **argv)
{
    if(SDL_Init(SDL_INIT_VIDEO)==0)
    {
        printf("Error: %s\n", SDL_GetError());
        return 1;
    }
 
    SDL_Window *window = SDL_CreateWindow(
    "HOLA MUNDO", //TITULO DE LA VENTANA
    SDL_WINDOWPOS_CENTERED, //POSICIÓN DE LA VENTANA EN X
    SDL_WINDOWPOS_CENTERED, //POSICIÓN DE LA VENTANA EN X
    800, //ANCHO DE LA VENTANA
    600, // ALTO DE LA VENTANA
    0
    );

    if(window == NULL)
    {
        printf("Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_RaiseWindow(window);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);

    SDL_Quit();

}