# ESP8266_Clock_Weather-station_Informer_with_WEB_interface
<b>ver.10.08.2018</b> <br>
Что появилось в новой версии?
- Переделан веб интерфейс - он стал легче, и у кого были проблемы с длительной загрузкой, это должно помочь;
- Добавлены 5 будильников. Можно выставить их работу: однократно, по дням недели, по будням и так далее;
- Добавлена кнопка для выключения будильника или отображения температуры в комнате;
- Добавлены 9 знаменательных дат. В поле сообщения можно вписать до 25 знаков кириллицы;
- Есть возможность указать в какой период времени будут работать знаменательные даты, в начале каждого часа;
- В вебе можно выбрать тип используемого базера (активный/пассивный);
- В ночное время можно включить отображение только часов;
- Поправлена процедура сброса к заводским установкам;
- К списку датчиков добавлен BME280.
<br>
<a href="http://piccy.info/view3/12540057/eef91597ac39401e5413c43be55b724c/" target="_blank"><img src="http://i.piccy.info/i9/b96eb1280f89069312300b191b95287d/1533837472/110634/1248178/Bezymiannyi.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-08-09-17-57/i9-12540057/407x768-r" target="_blank"><img src="http://i.piccy.info/a3/2018-08-09-17-57/i9-12540057/407x768-r/i.gif" alt="" border="0" /></a><br>

<a href="http://piccy.info/view3/12540058/b7e2327cd9ccdebe2c4d99276ce9532a/" target="_blank"><img src="http://i.piccy.info/i9/75a6e3b8cd52c63f56a85859b4a60e37/1533837637/40853/1248178/Bezymiannyi_500.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-08-09-18-22/i9-12540058/372x448-r" target="_blank"><img src="http://i.piccy.info/a3/2018-08-09-18-22/i9-12540058/372x448-r/i.gif" alt="" border="0" /></a><br>

<a href="http://piccy.info/view3/12540085/62620616d29bd7fac6a9bfea8b719403/" target="_blank"><img src="http://i.piccy.info/i9/3229c8211864dca22688a2256745bec3/1533838897/43970/1248178/Bezymiannyi_500.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-08-09-18-21/i9-12540085/488x342-r" target="_blank"><img src="http://i.piccy.info/a3/2018-08-09-18-21/i9-12540085/488x342-r/i.gif" alt="" border="0" /></a>
<br><hr>
<b>ver.30.05.2018</b> <br>
Прежде всего это часы. И большую часть рабочего времени они отображают на индикаторе MAX7219 именно текущее время.
Но в схеме предусмотрена возможность подключения дополнительных модулей (датчиков).<br>
<a href="http://piccy.info/view3/12360464/594acf6bf9a9d7ea4c14f5a5d28b6adc/" target="_blank"><img src="http://i.piccy.info/i9/f43215e4812b2f8cfb1658b43002ab1a/1527264109/40402/1246814/oy5jqpcv701fldb1lalsd6s31_500.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-05-25-16-01/i9-12360464/500x303-r" target="_blank"><img src="http://i.piccy.info/a3/2018-05-25-16-01/i9-12360464/500x303-r/i.gif" alt="" border="0" /></a>
<hr>
Часы не содержат модуля точного времени, по этому получение и синхронизация текующего времени происходит через сервер точного времени.
Настройки подключения к сети WiFi и к серверу точного времени выполняются через WEB интерфейс.
<br>
<a href="http://piccy.info/view3/12426813/08bfcd44411ef9276079fcab12083123/" target="_blank"><img src="http://i.piccy.info/i9/c396339543532732b6d8dd1f1817873e/1529447965/103375/1248178/Bezymiannyi.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-06-19-22-52/i9-12426813/512x620-r" target="_blank"><img src="http://i.piccy.info/a3/2018-06-19-22-52/i9-12426813/512x620-r/i.gif" alt="" border="0" /></a><hr>
Вывод даты на экран часов происходит поочередно с выводом прогноза погоды раз в минуту.
В ночное время когда выключен вывод на экран прогноза погоды, выводится текущая дата статически на пару секунд раз в минуту.
В будующем к часикам планируется несколько будильников и вывод на экран памятных дат.
Все настройки сохраняются в энерго независимой памяти.
При удачном сохранении настроек часы информируют звуковым сигналом.
При первом запуске часов, применяются настройки по умолчанию.
Сбросить часы к настройкам по умолчанию можно и в процессе эксплуатации через WEB интерфейс.<br>
<a href="http://piccy.info/view3/12426832/af44cb80707917dba031457f2e145eed/" target="_blank"><img src="http://i.piccy.info/i9/ba873a1a8317e0cf61de61ea485f5010/1529449021/116096/1248178/Bezymiannyi.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-06-19-22-57/i9-12426832/499x586-r" target="_blank"><img src="http://i.piccy.info/a3/2018-06-19-22-57/i9-12426832/499x586-r/i.gif" alt="" border="0" /></a><br>
В часах предусмотрена прошивка обновления через OTA (ArduinoIDE) и загрузка локального фала прошивки (bin) через WEB интерфес.
В дальнейшем планируется добавить возможность обновления прошивки с репозитория GitHub.<hr>
Настройки сервера прогноза погоды и время вывода на экран так же настраиваются через WEB интерфейс.
К часам можно подключить как внутренние (локальные) датчики (температуры, влажности, давления, высоты) так и внешние датчики температуры по протоколу MQTT.
Так же по протоколу MQTT часы принимают разные информационные сообщения, к примеру о привышении уровня газа...
Все настройки MQTT сервера выполняются через WEB интерфейс, при необходимости можно отключить обращения к MQTT серверу.
Выбор подключенных датчиков и настройку (какие именно данные они отображают (улица, дом)) можно так же выполнить из WEB интерфейса.<br>
<a href="http://piccy.info/view3/12426834/f49f7a5bf939f67c07da2b7a46782b79/" target="_blank"><img src="http://i.piccy.info/i9/3184c3b4974ae53090966cc2ca88ba60/1529449161/106693/1248178/Bezymiannyi.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-06-19-22-59/i9-12426834/507x632-r" target="_blank"><img src="http://i.piccy.info/a3/2018-06-19-22-59/i9-12426834/507x632-r/i.gif" alt="" border="0" /></a><br>
Информация с выбранных датчиков так же отображается на экране часов в конце каждой минуты.
В часах предусмотрена возможность изменения яркости экрана в зависимости от освещенности (при наличии установленного датчика) или по времени.<hr>
В WEB интерфейсе есть возможность выбрать язык текстовых сообщений выводимых на экран часов и язык самого WEB интерфейса.
На данный момент доступны к использованию шесть языков (украинский, русский, немецкий, польский, чешский и английский).
<hr>
Если вы заливаете последнюю прошивку, то не забывайте, что веб странички которые находятся в папке data заливаются через АрдуиноИДЕ - при помощи отдельного плагина (пункта меню)
<a href="http://piccy.info/view3/12485074/2300813e8eef86cc60e60d34c998f439/" target="_blank"><img src="http://i.piccy.info/i9/577884adbef046550a4afa226bf03568/1531667966/70098/1248178/Bezymiannyi.jpg" alt="Piccy.info - Free Image Hosting" border="0" /></a><a href="http://i.piccy.info/a3c/2018-07-15-15-19/i9-12485074/386x498-r" target="_blank"><img src="http://i.piccy.info/a3/2018-07-15-15-19/i9-12485074/386x498-r/i.gif" alt="" border="0" /></a>

Если этого пункта нет, то надо скачать архив по адресу
https://github.com/esp8266/arduino-esp8266fs-plugin/releases/download/0.3.0/ESP8266FS-0.3.0.zip
там внутри будет файлик, esp8266fs.jar
Его ложим в папку где установлена АрдуинаИДЕ , что бы путь к нему был таим....
/Arduino/tools/ESP8266FS/tool/esp8266fs.jar
После этого закрыть и открыть АрдуиноИДЕ и этот пункт появится в меню.
