yupay foo_sumar(yupay yupay1, yupay yupay2) {
    yupay tukusqa = yupay1 + yupay2;
    kutichiy tukusqa;
};

manaimapas bar_saludo() {
    qaytu saludo = "Allinllachu Pacha";
    imprimiy(saludo);
};

manaimapas suma_igual(yupay in1, yupay in2, yupay res) {
    sichus ( foo_sumar(in1, in2) == res) {
        imprimiy("chiqaq");
    } manachayqa {
        imprimiy("pantasqa");
    }
};

manaimapas main() {
    yupay b = 3;
    yupay c = 10;
    chaymantapacha (yupay a = 1; a < 10; a = a+1) {
        imprimiy(a);
        suma_igual(a,b,c);
    }
    yupay i = 0;
    chaykama (i < 10) {
        bar_saludo();
        i = i + 1;
    }
};

main();

