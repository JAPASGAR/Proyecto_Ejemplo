int main (void)
{
    printf("Hola mundo");
    // recuerda git en como el backend y HitHub es como el frontend
    // git clone <repo> // descargar un repositorio en mi PC, es decir, poder manejar el proyecto de manera local clonando todo el repositorio
    // git fetch // una vez descargado el repositorio, descargaba o actualizaba la información
    // git pull origin main // ya descargada la información, movía a mi último commit (es decir, los mensajes)
    // git commit -am "mensaje" //  guardar mis cambios
    // git push origin main //  subirlos al servidor


    // Luego están los branch, que son dentro de un mismo archivo, diferentes ramas de desarrollo
    // git branch Dev1 // pero parado en el main, digamos que aquí comenzaría -> el Dev1 es Develouper 1, desarrollador o programador 1
    // git checkout Dev1
    // ahora haces tus cambios
    // git push origin Dev1 // Y actualizas no el main, sino, el Dev1

    // si quisiera volver al main para crear un Dev2, sería:
    // git checkout main
    // git branch Dev2 o tb puedes poner -> git checkout -B Dev2 // esta última instrucción te crea el brach y te mieve al branch


    // tb hay que ver los Release -> hay gente que hace un branch y lo dejo ahí como si fuera un release, es como una versión buena conocida y guardada, yo lo entiendo como una copia de seguridad de una versión del código que sabemos que está bien y al que podemos volver

    // tb hay que ver los Issues -> es como un fallo que hay que resolver y lo normal es registrarlo con un Issue y crear un branch
}