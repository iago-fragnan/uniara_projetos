let tarefas = [];

window.onload = function() {
const tarefasSalvas = JSON.parse(localStorage.getItem("tarefas"));
if (tarefasSalvas) {
tarefas = tarefasSalvas;
tarefas.forEach((tarefa, index) => {
addTaskToDOM(tarefa, index);
});
}
};

function addTask() {
const input = document.getElementById("taskInput");
const texto = input.value.trim();
if (texto !== "") {
tarefas.push(texto);
saveTasks();
addTaskToDOM(texto, tarefas.length - 1);
input.value = "";
}
}
function addTaskToDOM(tarefa, index) {
const ul = document.getElementById("taskList");
const li = document.createElement("li");
li.textContent = tarefa;

// Botão de remover
const btn = document.createElement("button");
btn.className = "removeBtn";
btn.innerHTML = '<svg class="removeBtnIcon" width="800px" height="800px" viewBox="0 0 512 512" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink"><g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd"><g id="trashcan" fill="#000000" transform="translate(64.000000, 42.666667)"><path d="M256,42.6666667 L128,42.6666667 L128,7.10542736e-15 L256,7.10542736e-15 L256,42.6666667 Z M170.666667,170.666667 L128,170.666667 L128,341.333333 L170.666667,341.333333 L170.666667,170.666667 Z M256,170.666667 L213.333333,170.666667 L213.333333,341.333333 L256,341.333333 L256,170.666667 Z M384,85.3333333 L384,128 L341.333333,128 L341.333333,426.666667 L42.6666667,426.666667 L42.6666667,128 L0,128 L0,85.3333333 L384,85.3333333 Z" id="Shape"></path></g></g></svg>';
btn.onclick = function() {
ul.removeChild(li);
tarefas.splice(index, 1);
saveTasks();
renderTasks(); // Atualiza indices dos botões
};

li.appendChild(btn);
ul.appendChild(li);
}

// Recria toda a lista (útil para evitar problema de index ao remover)
function renderTasks() {
const ul = document.getElementById("taskList");
ul.innerHTML = "";
tarefas.forEach((tarefa, index) => {
addTaskToDOM(tarefa, index);
});
}

// Salva tarefas no localStorage
function saveTasks() {
localStorage.setItem("tarefas", JSON.stringify(tarefas));
}