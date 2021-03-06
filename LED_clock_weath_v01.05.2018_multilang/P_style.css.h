const char PAGE_Style_css[] PROGMEM = R"=====(
@charset "utf-8";
* {
    margin: 0;
    padding: 0;
    outline: none;

}
/*
padding: 1px             В=П=Н=Л
padding: 1px 1px         В=Н П=Л
padding: 1px 1px 1px     В П=Л Н
padding: 1px 1px 1px 1px B П Н Л
*/
html {
    height: 100%;
    width: 100%;
}
body {
    color: #333;
    background: #f7f7f7;
    height: 100%;
    width: 100%;
    font-size: 1em;
    font-family: PT Serif, sans-serif;

}
central-unit {
    background-color: aqua;
    box-shadow: 0 12px 15px rgba(0, 0, 0, 0.4);
    padding: 10px;
    margin-left: auto;
    margin-right: auto;
    width: 460px;
    max-width: 100%;
    display: block;
}
.informer {
    color: #000048;
    background-color: #ffff00;
    margin: 5px;
    padding: 1%;  /* Отступ сверху, справа, снизу и слева  */
    border: 2px solid darkblue;
    border-radius: 10px; /* радиус закругления углов */
    border-color: #3e3b3b;
    font-style: italic;
    text-align: justify;
    text-indent: 30px;
    display: block;
}
#main_unit {
    text-align: center;
}
#menu_unit {
    width: 97%;
    margin 10px;
    padding: 1%;
    border-radius: 10px; /* радиус закругления углов */


}
/* Стиль ссылок блока меню*/
#menu_unit a {
    color: #ffffc2;
    background-color: darkblue;
    width: 100%;
    border-radius: 5px;
    border: 2px solid yellow; /* радиус закругления углов */
    text-decoration: none; /* ссылки без подчеркивания */
    line-height: 150%;
    transition: all.6s ease; /* Плавное изменение цвета */
    -moz-transition: all.6s ease;
    -webkit-transition: all.6s ease;
    -ms-transition: all.6s ease;
    box-shadow: inset 0 0 10px 2px rgba(0,0,0,0.3);
    display: block;
}
#menu_unit a:hover {
    color: darkblue;
    background-color: yellow;
    border: 2px solid darkblue;
    width: 100%;
    text-decoration:none ;
    transition: all.6s ease; /* Плавное изменение цвета */
    -moz-transition: all.6s ease;
    -webkit-transition: all.6s ease;
    -ms-transition: all.6s ease;
    box-shadow: 0 0 10px 2px rgba(0,0,0,0.3);    
}
#menu_unit a:active {
    color: #910122;
}
/* Стиль ввода */ 
input[type=text].field, input[type=password].field {
    padding: 5px;
    margin: 1px;
    border: 2px solid darkblue; /* толщина и цвет бордера */
    border-radius: 5px; /* радиус закругления углов */ 
}
input:focus[type=text].field{border: 2px solid #00ff00}

input:invalid[type=text] {
    border:2px solid red !important;
}
#saves {
    color: darkblue;
    background-color: #00ff00;
    width: 98%;
    padding: 5px;
    margin: 3px;
    margin-left: 7px;
    border-radius: 5px;
    border: 2px solid yellow; /* радиус закругления углов */
    /*font-family: Comic Sans MS, sans-serif;*/
    font-size: 1em;
    font-weight: bold;
    text-transform: uppercase;
    display: block;
    line-height: 100%;
    cursor:pointer;
    box-shadow: inset 0 0 10px 2px rgba(0,0,0,0.3);
}
#saves:hover {
    background-color: yellow;
    border: 2px solid darkblue;
    box-shadow: 0 0 10px 2px rgba(0,0,0,0.3);
}
#reset {
    color: yellow;
    background-color: red;
    width: 101%;
    padding: 5px;
    border-radius: 5px;
    border: 2px solid yellow; /* радиус закругления углов */
    font-size: 1em;
    text-transform: uppercase;
    display: block;
    line-height: 100%;
    cursor:pointer;
    box-shadow: inset 0 0 10px 2px rgba(0,0,0,0.3);
    transition: all.6s ease; /* Плавное изменение цвета */
    -moz-transition: all.6s ease;
    -webkit-transition: all.6s ease;
    -ms-transition: all.6s ease;
}
#reset:hover {
    color: red;
    background-color: yellow;
    border: 2px solid darkblue;
    transition: all.6s ease; /* Плавное изменение цвета */
    -moz-transition: all.6s ease;
    -webkit-transition: all.6s ease;
    -ms-transition: all.6s ease;
    box-shadow: 0 0 10px 2px rgba(0,0,0,0.3);
}

.left {float: left}
.right {float: right}
.center {margin-left: 25%}
.clear {clear: both}
titles {
    color: darkblue;
    padding-bottom: 10px;
    font-size: 1.8em;
    font-weight: bold;
    text-align: center;
    text-transform: uppercase;
    display: block;
}
paragraph {
    color: #000019;
    padding-top: 5px;
    font-size: 1.2em;
    font-weight: bold;
    text-align: center;
    display: block;
    line-height: 140%;
}

/* Стиль выделения на странице */

::selection {background: green; color: #fff} /* Фон и цвет текста при выделении */
::-moz-selection {background: green; color: #fff}

/* Стиль переключателя */
.switch {
    margin-bottom: 8px;
    margin-top: 0;
    display: block;
}
input[type=checkbox] {
    display:none; 
}
.switch-btn {
    width: 56px;
    height: 30px;
    margin-left: 10px;
    background: #9b9b9b;
    position:absolute;
    cursor: pointer;
    border-radius: 5px;
    box-shadow: inset 0 0 10px 2px rgba(0,0,0,0.3);
    transform: scale(0.9);
}
input:checked[type="checkbox"] + .switch-btn {
    background: #00ff00;
}

.switch-btn:before {
    content: "";
    position: absolute;
    width: 24px;
    height: 24px;
    background: yellow;
    left: 4px;
    top: 3px;
    border-radius: 7px;
    transition: .3s;
    box-shadow: inset 3px -3px 5px 3px rgba(0,0,0,0.2),
                0 0 2px 2px rgba(0,0,0,0.2);
    transform: scale(0.9);
}
input:checked[type="checkbox"] + .switch-btn:before{
    left: 28px;
    transition: .3s;
}
/* Стили для селекта */
select {  
    height: 28px;
    padding: 0px 5px 0px;
    margin-bottom: 2px;
    margin-top: 0;
    margin-left: 5px;
    margin-right: 5px;
    border-radius: 5px;
    border: 2px solid darkblue;
}
/* Стили шапки и низа */
header, footer {
    padding: 5px;  /* Отступ слева и справа */
    margin-left: auto;
    margin-right: auto;
    width: 470px;
    max-width: 100%;
    display: block;
}
header {
    color: red;
    font-size: 1.2em;
    font-weight: bold;
    text-align: center;
    line-height: 115%;
}
footer {
    background-color: aqua;
    height: 30px;
    margin-top: 5px;
    font-weight: bold;
    box-shadow: 0 12px 15px rgba(0, 0, 0, 0.4);
}
)=====";
