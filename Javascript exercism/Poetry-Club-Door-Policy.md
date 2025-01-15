Creando una cadena
Para crear una cadena, encierra el texto entre comillas simples o dobles. En Exercism, se utilizan comillas simples.

'Hello, World!'
"Hello, World!"
Cadenas como listas de caracteres
Una cadena puede considerarse como una lista de caracteres en la que el primer carácter tiene índice 0. Puede acceder a un carácter individual de la cadena utilizando corchetes y el índice de la letra que desea recuperar.

'cat'[1];
// => 'a'
Puede determinar la cantidad de caracteres de una cadena accediendo a la lengthpropiedad.

'cat'.length;
// => 3
Concatenación y métodos
La forma más sencilla de concatenar cadenas es utilizar el operador de suma +.

'I like' + ' ' + 'cats.';
// => "I like cats."
Las cadenas proporcionan una gran cantidad de métodos auxiliares. Consulta la documentación de MDN sobre métodos de cadenas para obtener una lista completa. La siguiente lista muestra algunos métodos auxiliares de uso común.

toUpperCasey toLowerCase- cambia el formato de todos los caracteres
trim- eliminar espacios en blanco al principio y al final
includes, startsWithy endsWith- determinar si otra cadena es parte de la cadena dada
slice- extraer una sección de la cadena
Las cadenas son inmutables en JavaScript, por lo que una "modificación", por ejemplo, mediante alguno de los métodos anteriores, siempre creará una nueva cadena.

Instrucciones
Se ha inaugurado un nuevo club de poesía en la ciudad y estás pensando en asistir. Como en el pasado se han producido incidentes, el club tiene una política de acceso muy específica que tendrás que conocer antes de intentar entrar.

Hay dos puertas en el club de poesía, una delantera y otra trasera, y ambas están vigiladas. Para entrar, tendrás que averiguar la contraseña del día.

La contraseña siempre se basa en un poema y se puede obtener en un proceso de dos pasos.

El guardia recitará el poema, una línea a la vez y usted tendrá que responder con la letra apropiada de esa línea.
Ahora el guardia te dirá todas las letras con las que respondiste a la vez y tendrás que escribirlas en un papel en un formato específico.
Los detalles del proceso dependen de la puerta por la que intentes entrar.

1. Obtener la primera letra de una oración
Para determinar las letras de la contraseña de la puerta de entrada, debes responder con la primera letra del verso del poema que te recita el guardia.

Para terminar con una contraseña bonita, a los miembros del club de poesía les gusta utilizar poemas acrósticos . Esto significa que la primera letra de cada oración forma una palabra. Aquí hay un ejemplo de uno de sus escritores favoritos, Michael Lockwood.

Stands so high
Huge hooves too
Impatiently waits for
Reins and harness
Eager to leave
Entonces, cuando el guardia recite "Está tan alto" , responderás S ; cuando el guardia recite " También tienen pezuñas enormes" , responderás H.

Implementa la función frontDoorResponseque toma una línea del poema como argumento y devuelve la primera letra de esa línea.

frontDoorResponse('Stands so high');
// => "S"
2. Poner una palabra en mayúscula
Ahora que tienes todas las letras correctas, todo lo que necesitas hacer para obtener la contraseña de la puerta principal es escribir la palabra correctamente en mayúscula.

Implemente la función frontDoorPasswordque acepta una cadena (las letras combinadas que encontró en la tarea 1) y la devuelve correctamente en mayúscula.

frontDoorPassword('SHIRE');
// => "Shire"

frontDoorPassword('shire');
// => "Shire"
3. Obtener la última letra de una oración
Para determinar las letras de la contraseña de la puerta trasera, debes responder con la última letra del verso del poema que te recita el guardia.

Los miembros del club de poesía son muy ingeniosos. El poema mencionado anteriormente también es telestich , lo que significa que la última letra de cada oración también forma una palabra:

Stands so high
Huge hooves too
Impatiently waits for
Reins and harness
Eager to leave
Cuando el guardia recita " Está tan alto ", responderás "h" , cuando el guardia recita " También tienen enormes pezuñas" , responderás "o" .

Tenga en cuenta que, a veces, el protector hace pausas estilísticas (en forma de espacios en blanco) al principio o al final de una línea. Deberá ignorar esas pausas para derivar la letra correcta.

Implementa la función backDoorResponseque toma una línea del poema como argumento y devuelve la última letra de esa línea que no sea un carácter de espacio.

backDoorResponse('Stands so high');
// => "h"

backDoorResponse('Stands so high   ');
// => "h"
4. Sea cortés
Para entrar al club de poesía por la puerta trasera, hay que ser muy educado. Por eso, para obtener la contraseña, esta vez hay que escribir la palabra correctamente en mayúscula y añadirla ', please'al final.

Implemente la función backDoorPasswordque acepta una cadena (las letras combinadas que encontró en la tarea 3) y devuelve la versión educada de la contraseña en mayúscula.

backDoorPassword('horse');
// => "Horse, please"