Introducción
Un booleano representa uno de dos valores: trueo false. Los operadores lógicos ( !,, ) se utilizan normalmente con &&valores ||booleanos y devuelven un valor booleano.

Instrucciones
En este ejercicio, implementarás la lógica de búsqueda para un nuevo juego de rol que un amigo está desarrollando. El personaje principal del juego es Annalyn, una chica valiente con un perro mascota feroz y leal. Desafortunadamente, ocurre un desastre, ya que su mejor amiga fue secuestrada mientras buscaba bayas en el bosque. Annalyn intentará encontrar y liberar a su mejor amiga y, opcionalmente, llevará a su perro con ella en esta búsqueda.

Después de un tiempo siguiendo el rastro de su mejor amiga, encuentra el campamento en el que está prisionera su mejor amiga. Resulta que hay dos secuestradores: un poderoso caballero y un astuto arquero.

Habiendo encontrado a los secuestradores, Annalyn considera cuál de las siguientes acciones puede realizar:

Ataque rápido : se puede realizar un ataque rápido si el caballero está durmiendo , ya que le toma tiempo ponerse la armadura, por lo que será vulnerable.
Espía : se puede espiar al grupo si al menos uno de ellos está despierto . De lo contrario, espiar es una pérdida de tiempo.
Señalar al prisionero : se puede señalar al prisionero mediante sonidos de pájaros si el prisionero está despierto y el arquero está durmiendo , ya que los arqueros están entrenados en señales de pájaros para que puedan interceptar el mensaje.
Prisionero libre : Annalyn puede intentar colarse en el campo para liberar al prisionero. Esto es algo arriesgado y sólo puede tener éxito de dos maneras:
Si Annalyn tiene su perro con ella, puede rescatar al prisionero si el arquero está dormido . El caballero le tiene miedo al perro y el arquero no tendrá tiempo de prepararse antes de que Annalyn y el prisionero puedan escapar.
¡Si Annalyn no tiene su perro entonces ella y el prisionero deben ser muy astutos! Annalyn puede liberar al prisionero si el prisionero está despierto y el caballero y el arquero están durmiendo , pero si el prisionero está durmiendo no pueden ser rescatados: el prisionero se sorprendería por la repentina aparición de Annalyn y despertaría al caballero y al arquero.
Tienes cuatro tareas: implementar la lógica para determinar si las acciones anteriores están disponibles en función del estado de los tres personajes que se encuentran en el bosque y si el perro mascota de Annalyn está presente o no.

Implemente una función denominada canExecuteFastAttackque tome un valor booleano que indique si el caballero está despierto. Esta función regresa truesi la acción 'Ataque rápido' está disponible según el estado del personaje. De lo contrario, devuelve false:

const knightIsAwake = true;
canExecuteFastAttack(knightIsAwake);
// => false

¿Atascado? Revelar sugerencias
Se abre en un modal
Implemente una función denominada canSpyque tome tres valores booleanos, indicando si el caballero, el arquero y el prisionero, respectivamente, están despiertos. La función regresa truesi la acción 'Espiar' está disponible según el estado de los personajes. De lo contrario, devuelve false:

const knightIsAwake = false;
const archerIsAwake = true;
const prisonerIsAwake = false;
canSpy(knightIsAwake, archerIsAwake, prisonerIsAwake);
// => true

¿Atascado? Revelar sugerencias
Se abre en un modal
Implemente una función denominada canSignalPrisonerque tome dos valores booleanos, indicando si el arquero y el prisionero, respectivamente, están despiertos. La función regresa truesi la acción 'Señalar prisionero' está disponible según el estado de los personajes. De lo contrario, devuelve false:

const archerIsAwake = false;
const prisonerIsAwake = true;
canSignalPrisoner(archerIsAwake, prisonerIsAwake);
// => true

¿Atascado? Revelar sugerencias
Se abre en un modal
Implemente una función denominada canFreePrisonerque tome cuatro valores booleanos. Los primeros tres parámetros indican si el caballero, el arquero y el prisionero, respectivamente, están despiertos. El último parámetro indica si el perro mascota de Annalyn está presente. La función regresa truesi la acción 'Liberar al prisionero' está disponible según el estado de los personajes y la presencia del perro mascota de Annalyn. De lo contrario, devuelve false:

const knightIsAwake = false;
const archerIsAwake = true;
const prisonerIsAwake = false;
const petDogIsPresent = false;
canFreePrisoner(knightIsAwake, archerIsAwake, prisonerIsAwake, petDogIsPresent);
// => false

¿Atascado? Revelar sugerencias
Se abre en un modal
Cómo depurar
Cuando una prueba falla, se muestra un mensaje que describe qué salió mal y para qué entrada. También puede utilizar el hecho de que consoletambién se mostrará cualquier resultado. Puedes escribir en la consola usando:

console.log('Debug message');