En este ejercicio, implementarás la lógica de misiones para un nuevo juego de rol que está desarrollando un amigo. El personaje principal del juego es Annalyn, una chica valiente con un perro mascota feroz y leal. Desafortunadamente, ocurre un desastre, ya que su mejor amiga fue secuestrada mientras buscaba bayas en el bosque. Annalyn intentará encontrar y liberar a su mejor amiga, y opcionalmente llevará a su perro con ella en esta misión.

Después de pasar un tiempo siguiendo el rastro de su mejor amiga, encuentra el campamento en el que está prisionera. Resulta que hay dos secuestradores: un poderoso caballero y un astuto arquero.

Después de encontrar a los secuestradores, Annalyn considera cuál de las siguientes acciones puede llevar a cabo:

Ataque rápido : se puede realizar un ataque rápido si el caballero está durmiendo , ya que le lleva tiempo ponerse la armadura, por lo que será vulnerable.
Espía : el grupo puede ser espiado si al menos uno de ellos está despierto . De lo contrario, espiar es una pérdida de tiempo.
Señalar al prisionero : se le puede hacer señales al prisionero usando sonidos de pájaros si el prisionero está despierto y el arquero está durmiendo , ya que los arqueros están entrenados en señales de pájaros para que puedan interceptar el mensaje.
Prisionero libre : Annalyn puede intentar colarse en el campamento para liberar al prisionero. Es una acción arriesgada y solo puede tener éxito de una de estas dos maneras:
Si Annalyn lleva consigo a su perro mascota, podrá rescatar al prisionero si el arquero está dormido . El caballero le tiene miedo al perro y el arquero no tendrá tiempo de prepararse antes de que Annalyn y el prisionero puedan escapar.
Si Annalyn no tiene a su perro, entonces ella y el prisionero deben ser muy astutos. Annalyn puede liberar al prisionero si este está despierto y el caballero y el arquero están durmiendo , pero si el prisionero está dormido , no pueden ser rescatados: el prisionero se sobresaltaría por la aparición repentina de Annalyn y despertaría al caballero y al arquero.
Tienes cuatro tareas: implementar la lógica para determinar si las acciones anteriores están disponibles en función del estado de los tres personajes encontrados en el bosque y si el perro mascota de Annalyn está presente o no.