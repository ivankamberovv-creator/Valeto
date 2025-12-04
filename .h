<!DOCTYPE html>
<html lang="bg">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Пещера – избори</title>

<style>
    body {
        margin: 0;
        padding: 0;
        height: 100vh;
        background-image: url('https://images.unsplash.com/photo-1501785888041-af3ef285b470?auto=format&fit=crop&w=1600&q=80');
        background-size: cover;
        background-position: center;
        font-family: Arial, sans-serif;
        display: flex;
        flex-direction: column;
        justify-content: flex-end;
        align-items: center;
        color: white;
        text-shadow: 0 0 5px black;
    }

    #buttons {
        margin-bottom: 40px;
        display: flex;
        gap: 20px;
    }

    button {
        padding: 12px 22px;
        font-size: 18px;
        border: none;
        border-radius: 8px;
        cursor: pointer;
        background: rgba(0,0,0,0.6);
        color: white;
        transition: 0.2s;
    }

    button:hover {
        background: rgba(255,255,255,0.2);
    }

    #result {
        position: absolute;
        top: 20px;
        background: rgba(0,0,0,0.6);
        padding: 15px 20px;
        border-radius: 8px;
        font-size: 20px;
        display: none;
    }
</style>

</head>
<body>

<div id="result"></div>

<div id="buttons">
    <button onclick="fight()">Бием се</button>
    <button onclick="talk()">Говорим с него</button>
    <button onclick="run()">Бягаме от него</button>
</div>

<script>
    function show(text) {
        const box = document.getElementById("result");
        box.style.display = "block";
        box.textContent = text;
    }

    function fight() {
        show("Хвърляте се в битка! Тварта изрева и се втурна срещу вас!");
    }

    function talk() {
        show("Приближавате внимателно... Тварта ви гледа с жълти очи. Може би разбира думите ви.");
    }

    function run() {
        show("Обръщате се и побягвате! Сянката зад вас се раздвижва...");
    }
</script>

</body>
</html>
