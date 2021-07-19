//--------------------------------------------------------------------------------------------------------------------
//funcion rellenar palabra
function rellenar_palabra(palabra_actual, palabra_secreta_dividida) {
  for (var i = 0; i < palabra_secreta_dividida.length; i++) {
    palabra_actual[i] = "_";
  }
  return palabra_actual;
}
//--------------------------------------------------------------------------------------------------------------------
//funcion cambiar_jugador
function cambiar_jugador(jugador) {
  if (jugador == 1) {
    jugador = 2;
  } else {
    jugador = 1;
  }
  return jugador;
}

//--------------------------------------------------------------------------------------------------------------------
// main()
//--------------------------------------------------------------------------------------------------------------------
//variables
var palabra_secreta;
var palabra_secreta_dividida = [];
var palabra_actual = [];
var fin_juego = false;
var letra;
var respuesta;
var jugador = 1;
var palabra_posible;
//acaban las variables

//set value of variables 
palabra_secreta = "avion";
palabra_secreta_dividida = Array.from(palabra_secreta);
palabra_actual = rellenar_palabra(palabra_actual, palabra_secreta_dividida);

//bucle 
while (fin_juego == false) {
    //pide escribir una letra
  letra = prompt("Turno " + jugador + " escribe una letra");
  while (!letra) {
    letra = prompt("Turno " + jugador + " escribe una letra");
  }

  //recorre el array y establece en la posición la letra
  for (var i = 0; i < palabra_secreta_dividida.length; i++) {
    if (palabra_secreta_dividida[i] == letra) {
      palabra_actual[i] = letra;
    }
  }
  //escribe la palabra en pantalla
  alert(palabra_actual);
  document.write(palabra_actual + "<br />");

  //pregunta si quiere resolver
  respuesta = prompt("Desea resolver? Responda si o no");
  while (!respuesta) {
    respuesta = prompt("Desea resolver? Responda si o no");
  }

  //si la respuesta es si...
  if (respuesta == "si") {
    palabra_posible = prompt("¿Qué palabra cree que es?");
    while (!palabra_posible) {
      palabra_posible = prompt("¿Qué palabra cree que es?");
    }
  }

  //si las palabras son iguales...
  if (palabra_posible == palabra_secreta) {
    alert("Ganaste");
    fin_juego = true;
  }

  //si la respuesta es no...
  if (respuesta == "no") {
    alert("Siguiente jugador");
  }
  jugador = cambiar_jugador(jugador);
}
