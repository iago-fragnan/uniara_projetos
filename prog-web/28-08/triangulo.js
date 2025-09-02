// Iago Fragnan
// Joao Paulo da Silva Rufino
// Joao Pedro Mendes

function verificarTriangulo(l1, l2, l3){
    if(l1 > l2 && l1 > l3){
        return "É possivel fazer um triangulo";
    }
    return "Não é possivel formar um triangulo";
}

verificarTriangulo(0, 1, 0); // não é possivel
verificarTriangulo(5, 3, 5); // é possivel formar