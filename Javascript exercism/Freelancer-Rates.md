Números
Muchos lenguajes de programación tienen tipos numéricos específicos para representar diferentes tipos de números, pero JavaScript solo tiene dos:

number: un tipo de datos numéricos en formato de punto flotante de 64 bits de doble precisión (IEEE 754). Algunos ejemplos son -6, -2.4, 0, 0.1, 1, 3.14, 16.984025, 25, 976, 1024.0y 500000.
bigint: un tipo de datos numéricos que puede representar números enteros en un formato de precisión arbitrario. Algunos ejemplos son -12n, 0n, 4ny 9007199254740991n.
Si necesita precisión arbitraria o trabaja con números extremadamente grandes, utilice el biginttipo. De lo contrario, numberes probable que el tipo sea la mejor opción.

Redondeo
Hay un objeto global integrado llamado Mathque proporciona varias funciones de redondeo . Por ejemplo, puede redondear hacia abajo ( floor) o hacia arriba ( ceil) números decimales a los números enteros más cercanos.

Math.floor(234.34); // => 234
Math.ceil(234.34); // => 235
Operadores aritméticos
JavaScript proporciona 6 operadores diferentes para realizar operaciones aritméticas básicas con números.

+:El operador de suma se utiliza para encontrar la suma de números.
-:El operador de resta se utiliza para encontrar la diferencia entre dos números.
*:El operador de multiplicación se utiliza para encontrar el producto de dos números.
/:El operador de división se utiliza para dividir dos números.
2 - 1.5; //=> 0.5
19 / 2; //=> 9.5
%:El operador de resto se utiliza para encontrar el resto de una división realizada.

40 % 4; // => 0
-11 % 4; // => -3
**:El operador de exponenciación se utiliza para elevar un número a una potencia.

4 ** 3; // => 64
4 ** 1 / 2; // => 2
Orden de operaciones
Al utilizar varios operadores en una línea, JavaScript sigue un orden de precedencia como se muestra en esta tabla de precedencia . Para simplificarlo en nuestro contexto, JavaScript utiliza la regla PEDMAS (Paréntesis, Exponentes, División/Multiplicación, Suma/Resta) que hemos aprendido en las clases de matemáticas de primaria.

const result = 3 ** 3 + 9 * 4 / (3 - 1);
// => 3 ** 3 + 9 * 4/2
// => 27 + 9 * 4/2
// => 27 + 18
// => 45
Operadores de asignación abreviados
Los operadores de asignación abreviados son una forma más breve de escribir código que realiza operaciones aritméticas en una variable y asigna el nuevo valor a la misma variable. Por ejemplo, considere dos variables xy y. Entonces, x += yes lo mismo que x = x + y. A menudo, esto se usa con un número en lugar de una variable y. Las otras 5 operaciones también se pueden realizar de manera similar.

let x = 5;
x += 25; // x is now 30

let y = 31;
y %= 3; // y is now 1
Instrucciones
En este ejercicio, escribirás código para ayudar a un profesional independiente a comunicarse con sus clientes sobre los precios de determinados proyectos. Escribirás algunas funciones de utilidad para calcular rápidamente los costos para los clientes.

1. Calcular la tarifa diaria dada una tarifa por hora
Un cliente se pone en contacto con el profesional independiente para preguntarle sobre sus tarifas. El profesional independiente le explica que trabaja 8 horas al día, pero solo conoce sus tarifas por hora para el proyecto. Ayúdelo a estimar una tarifa diaria teniendo en cuenta una tarifa por hora.

dayRate(89);
// => 712
No es necesario redondear ni cambiar el tipo de cambio diario a una precisión "fija".

2. Calcular el número de días laborables dado un presupuesto fijo
Otro día, un jefe de proyecto le ofrece al freelance trabajar en un proyecto con un presupuesto fijo. Teniendo en cuenta el presupuesto fijo y la tarifa por hora del freelance, ayúdelo a calcular el número de días que trabajaría hasta agotar el presupuesto. El resultado debe redondearse al número entero inferior más próximo .

daysInBudget(20000, 89);
// => 28
3. Calcular la tasa de descuento para proyectos grandes
A menudo, los clientes del profesional independiente lo contratan para proyectos que abarcan varios meses. En estos casos, el profesional independiente decide ofrecer un descuento por cada mes completo y los días restantes se facturan a tarifa diaria. Cada mes tiene 22 días facturables. Ayúdelo a estimar el costo de dichos proyectos, dada una tarifa por hora, la cantidad de días que abarca el proyecto y una tasa de descuento mensual. El descuento siempre se pasa como un número, donde 42%se convierte en 0.42. El resultado debe redondearse al número entero más cercano.

priceWithMonthlyDiscount(89, 230, 0.42);
// => 97972