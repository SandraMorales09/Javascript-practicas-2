// Datos de ejemplo para las preguntas de historia
const preguntasHistoria = [
    {
      pregunta: "¿En qué año descubrió Cristóbal Colón América?",
      opciones: ["1492", "1500", "1600", "1400"],
      respuestaCorrecta: "1492"
    },
    {
      pregunta: "¿Quién fue el primer presidente de los Estados Unidos?",
      opciones: ["Abraham Lincoln", "George Washington", "Thomas Jefferson", "John Adams"],
      respuestaCorrecta: "George Washington"
    },
    // Puedes agregar más preguntas aquí
  ];
  
  // Función para mostrar una pregunta y verificar la respuesta del usuario
  function mostrarPregunta(indice) {
    const pregunta = preguntasHistoria[indice];
    const opciones = pregunta.opciones.map((opcion, i) => {
      return `<button onclick="verificarRespuesta('${opcion}', '${pregunta.respuestaCorrecta}')">${opcion}</button>`;
    }).join("");
  
    document.body.innerHTML = `
      <div>
        <p>${pregunta.pregunta}</p>
        <div>${opciones}</div>
      </div>
    `;
  }
  
  // Función para verificar la respuesta del usuario
  function verificarRespuesta(opcionSeleccionada, respuestaCorrecta) {
    if(opcionSeleccionada === respuestaCorrecta) {
      alert("¡Correcto!");
    } else {
      alert("Incorrecto. Intenta de nuevo.");
    }
    // Aquí puedes agregar lógica para pasar a la siguiente pregunta
  }
  
  // Iniciar el ejercicio mostrando la primera pregunta
  mostrarPregunta(0);