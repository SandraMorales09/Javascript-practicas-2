La novia de Lucian está de camino a casa, ¡y él aún no ha preparado su cena de aniversario!

En este ejercicio, escribirás algo de código para ayudar a Lucian a cocinar una exquisita lasaña de su libro de cocina favorito.

Tienes cuatro tareas relacionadas con el tiempo empleado en cocinar la lasaña.

1. Defina el tiempo de cocción esperado en minutos.
Define la EXPECTED_MINUTES_IN_OVENconstante que representa cuántos minutos debe estar la lasaña en el horno. Debe ser exportada. Según el libro de cocina, el tiempo de horno esperado en minutos es 40.

2. Calcula el tiempo restante del horno en minutos.
Implemente la remainingMinutesInOvenfunción que toma los minutos reales que la lasaña ha estado en el horno como parámetro y devuelve cuántos minutos aún le quedan a la lasaña en el horno, en función del tiempo de horno esperado en minutos de la tarea anterior.

remainingMinutesInOven(30);
// => 10
3. Calcula el tiempo de preparación en minutos
Implementa la preparationTimeInMinutesfunción que toma la cantidad de capas que agregaste a la lasaña como parámetro y devuelve cuántos minutos tardaste en preparar la lasaña, asumiendo que cada capa tarda 2 minutos en prepararse.

preparationTimeInMinutes(2);
// => 4
4. Calcula el tiempo total de trabajo en minutos.
Implementa la totalTimeInMinutesfunción que toma dos parámetros : el numberOfLayersparámetro es la cantidad de capas que agregaste a la lasaña y el actualMinutesInOvenparámetro es la cantidad de minutos que la lasaña ha estado en el horno. La función debe devolver cuántos minutos en total has trabajado en la cocción de la lasaña, que es la suma del tiempo de preparación en minutos y el tiempo en minutos que la lasaña ha estado en el horno en este momento.

totalTimeInMinutes(3, 20);
// => 26