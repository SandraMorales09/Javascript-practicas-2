Introducción
JavaScript es un lenguaje dinámico que admite estilos orientados a objetos, imperativos y declarativos (por ejemplo, programación funcional).

(Re-)Asignación
Hay algunas formas principales de asignar valores a nombres en JavaScript: utilizando variables o constantes. En Ejercicio, las variables siempre se escriben en camelCase ; Las constantes están escritas en SCREAMING_SNAKE_CASE . No existe una guía oficial a seguir y varias empresas y organizaciones tienen varias guías de estilo. Siéntase libre de escribir variables como desee . La ventaja de escribirlos de la forma en que se preparan los ejercicios es que se resaltarán de manera diferente en la interfaz web y en la mayoría de los IDE.

Las variables en JavaScript se pueden definir usando la constpalabra clave leto var.

Una variable puede hacer referencia a diferentes valores a lo largo de su vida útil cuando se usa leto var. Por ejemplo, myFirstVariablese puede definir y redefinir muchas veces utilizando el operador de asignación =:

let myFirstVariable = 1;
myFirstVariable = 'Some string';
myFirstVariable = new SomeComplexClass();
A diferencia de lety var, las variables definidas con constsólo se pueden asignar una vez. Esto se utiliza para definir constantes en JavaScript.

const MY_FIRST_CONSTANT = 10;

// Can not be re-assigned.
MY_FIRST_CONSTANT = 20;
// => TypeError: Assignment to constant variable.
💡 En un ejercicio conceptual posterior se explora y explica la diferencia entre asignación/vinculación constante y valor constante .

Declaraciones de funciones
En JavaScript, las unidades de funcionalidad se encapsulan en funciones , generalmente agrupando funciones en el mismo archivo si pertenecen juntas. Estas funciones pueden tomar parámetros (argumentos) y pueden devolver un valor utilizando la returnpalabra clave. Las funciones se invocan mediante ()sintaxis.

function add(num1, num2) {
  return num1 + num2;
}

add(1, 3);
// => 4
💡 En JavaScript hay muchas formas diferentes de declarar una función. Estas otras formas se ven diferentes al uso de la functionpalabra clave. La pista intenta presentarlos gradualmente, pero si ya los conoces, no dudes en utilizar cualquiera de ellos. En la mayoría de los casos, usar uno u otro no es mejor ni peor.

Exponer a otros archivos
Para que functionuna constante o una variable estén disponibles en otros archivos , deben exportarse utilizando la exportpalabra clave. Luego, otro archivo puede importarlos usando la importpalabra clave. Esto también se conoce como sistema de módulos. Un gran ejemplo es cómo funcionan todas las pruebas. Cada ejercicio tiene al menos un archivo, por ejemplo lasagna.js, que contiene la implementación . Además, hay al menos otro archivo, por ejemplo lasagna.spec.js, que contiene las pruebas . Este archivo importa las entidades públicas (es decir, exportadas) para probar la implementación:

// file.js
export const MY_VALUE = 10;

export function add(num1, num2) {
  return num1 + num2;
}

// file.spec.js
import { MY_VALUE, add } from './file';

add(MY_VALUE, 5);
// => 15
Instrucciones
¡La novia de Lucian está de camino a casa y él no ha preparado la cena de aniversario!

En este ejercicio, escribirás código para ayudar a Lucian a cocinar una exquisita lasaña basada en su libro de cocina favorito.

Tienes cuatro tareas relacionadas con el tiempo empleado en cocinar la lasaña.

Define la EXPECTED_MINUTES_IN_OVENconstante que representa cuántos minutos debe estar la lasaña en el horno. Hay que exportarlo. Según el libro de cocina, el tiempo esperado en el horno en minutos es 40.


¿Atascado? Revelar sugerencias
Se abre en un modal
Implemente la remainingMinutesInOvenfunción que toma como parámetro los minutos reales que la lasaña ha estado en el horno y devuelve cuántos minutos aún le quedan a la lasaña en el horno, según el tiempo de horno esperado en minutos de la tarea anterior.

remainingMinutesInOven(30);
// => 10

¿Atascado? Revelar sugerencias
Se abre en un modal
Implemente la preparationTimeInMinutesfunción que toma como parámetro la cantidad de capas que agregó a la lasaña y devuelve cuántos minutos pasó preparando la lasaña, asumiendo que cada capa le toma 2 minutos para prepararse.

preparationTimeInMinutes(2);
// => 4

¿Atascado? Revelar sugerencias
Se abre en un modal
Implemente la totalTimeInMinutesfunción que requiere dos parámetros : el numberOfLayersparámetro es la cantidad de capas que agregó a la lasaña y el actualMinutesInOvenparámetro es la cantidad de minutos que la lasaña ha estado en el horno. La función debería devolver cuántos minutos en total has trabajado para cocinar la lasaña, que es la suma del tiempo de preparación en minutos y el tiempo en minutos que la lasaña ha estado en el horno en este momento.

totalTimeInMinutes(3, 20);
// => 26

¿Atascado? Revelar sugerencias
Se abre en un modal
Cómo depurar
Cuando una prueba falla, se muestra un mensaje que describe qué salió mal y para qué entrada. También puede utilizar el hecho de que consoletambién se mostrará cualquier resultado. Puedes escribir en la consola usando:

console.log('Debug message');