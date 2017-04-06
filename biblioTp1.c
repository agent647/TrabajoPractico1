/*
    Pide ingreso de dato por consola de un dato numerico.
*/

float entradaUsuario(){

    float memory;

    printf("Ingrese un numero por favor. \n");

    scanf("%f", &memory );

    return memory;
}

/*
    Modulo para la suma de dos numeros
*/

float sumaFuncion(float x,float y){
    return x + y;
}
/*
    Modulo para la resta de dos numeros
*/

float restaFuncion(float x, float y){
    return x - y;
}
/*
    Modulo para la multiplicacion de dos numeros
*/
float multiFuncion(float x, float y){
    return x * y;
}
/*
    Modulo para la division de dos numeros
*/
float divisionFuncion(float numerador, float divisor){
    if(divisor == 0){
        return  0;
    }else{
        return numerador / divisor;
    }
}
/*
    Modulo para sacar el factorial de un numero.
*/
float factorialFuncion(float x){
    if(x == 1){
        return 1;
    }else{
        return x*factorialFuncion(x-1);
    }
}
/*
    Modulo para validar una division que emplea divisionFuncion.
*/
void validacionDivision(float x, float y){

    float divi = divisionFuncion(x, y);
        if(divi == 0){
            printf("Tiende a infinito.\n");
        }else{
            printf("La division de %.2f / %.2f, da como resultado : %.2f\n", x, y, divi);
         }
}
/*
    Modulo que ejecuta todas las funciones.
*/
void calcularTodo(float x, float y){

    printf("La suma de %.1f + %.1f, da como resultado : %.1f\n", x, y, sumaFuncion(x, y));
    printf("La resta de %.1f - %.1f, da como resultado : %.1f\n", x, y, restaFuncion(x, y));
    printf("La multiplicacion de %1.f * %.1f, da como resultado : %.1f\n", x, y, multiFuncion(x, y));
    validacionDivision(x, y);
    printf("El factorial de %.1f es : %.1f\n", x, factorialFuncion(x));

}
