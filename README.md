# Seguridad_de_Datos

## Bitácora de Clase

### 📅 19 de Enero de 2026
- El profesor explicó los parámetros de evaluación.
- Comentó que para el **primer parcial** debemos tener el **Attiny85**.
- También indicó los **sistemas** que utilizaremos durante el semestre.
- Para el **segundo parcial** debemos tener el **esp32 wifi**.
- Explicó que es un **sniffer**, un script que escucha todo lo que el usuario real escriba
- 25 de Febrero fecha de Primer Parcial
- **CIA** Confidentiality: Sólo acceso para las personas que tienen las credenciales para ingresar a esa información, Integrity: Mantener los datos completos sin alteraciones and Availability: Que la información pueda ser usada.
- La Triple A es **Authentication**: Comprobar que eres la persona, **Authorization**:  Darle los permisos y tienes los permisos **Accountability**: Cuando se puede asociar una acción. 
- **Non Repudiation**: Que la persona no pueda negar sus credenciales con los movimientos.
- **Multi Step o Multi Factor Authorization**: Los tres factores son: **Sabes**: Proporciona información que conoce el usuario, **Tienes**: Verifica la identidad del usuario utilizando algo que posee y **Eres**: verifica a la persona por algún atributo personal único, como la autenticación biométrica o el reconocimiento de voz.
- **Uso**: Cuando está en memoria, **Transmisión**: Protocolos y **Reposo**
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- ### 📅 21 de Enero de 2026
- Repaso de los temas vistos en la primera clase.
- Hay 2 conceptos en la seguridad:
- 1.- **Separation of duties**: Separar tareas por que hay escenarios en los que una sola persona no puede tener toda la responsabilidad.
- 2.- **Least Privilege**: No todos los usuarios deben ser administrador, cada usuario debe tener los permisos justos para su rol.
- **TFA** True Factor Authentication.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- **Modelos OSI**:                                        **TCP/IP**: 
- Aplicación                                             |                     
- Presentación                                           |- Aplicación        |AA:BB:CC:|DD:EE:FF|
- Sesión                                                 |           **Vendor**: Fabricantes|**OID**: Object ID
- Transporte                                              - Transporte
- Red                                                     - Red
- Enlace de Datos                                         - Enlace de Datos
- Física                                                  - Física
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
- El switch sabe a dónde conectarse, el switch usa la tabla de direcciones, A través del protocolo **ARP** y hay switches que usan los protocolos **802.1x** que permite que identifique la conexión al puerto.
- El espacio de almacenamiento del switch está limitado y al hacer eso es como envenenar la tabla y hacerle creer al switch que hay muchas solicitudes.
- **Spoofing**: Hacerse pasar por otra entidad (IP, email, etc.) para engañar.
- **Poisoning**: es una técnica específica de spoofing (como envenenamiento de caché DNS o ARP) que corrompe datos legítimos (caché) para redirigir tráfico, y aunque se usan a menudo indistintamente, el poisoning es un método de spoofing para permitir ataques de Man-in-the-Middle o robar datos.
- En cada capa hay redireccionamientos y las Lógicas o red son las IP, en la de Transporte son los Puertos, en Aplicación pueden ser @Mail, URL, Filesystem IP Phone, AD (Active Directory) y Enlace de Datos es Mac Address.
                                                                   D . D . N
- Notación decimal con puntos son las que llevan las direcciones: 192.168.1.0
- Hay en total 65,536 puertos para servicios o 2 a la 16.
- El switch como es de enlace de datos no sabe la dirección IP de cada dispositivo, el que gobierna la capa de red es el router.
- A nivel de la capa de transporte hay puertos más comunes: 80: **HTTP**, 22: **SSH**, 21: **FTP**, 25: **SMTP**, 53: **DNS**, 110: **POP3**, 3389: **RDP**, 143: **IMAP**,  1433: **SQLS**, 3306: **MYSQL**, 443: **HTTPS**. Se recomienda cambiar los puertos para confundir al enemigo. 
- Ejecutas un **Port Scanning** para identificar en la capa de transporte los servicios abiertos.
- Con la herramienta Nmap: Puedes hacer el escaneo de puertos con un script muy sencillo, funciona en Windows, Linux, Mac, ISH (Iphone) y Termius (Android).
- Antes del escaneo de puertos haces un escaneo, para investigar y perfilar al objetivo.
- Instalar Wireshark para hacer escaneos de red, en la capa de transporte hay dos protocolos: **TCP**: Orientado y se preocupa porque lleguen los datos al otro lado y tiene mecanismos para corregirlo y vuelve a enviar y **UDP**: No orientado, o sea no tiene los mecanismo ni el cuidado al envío de datos, por eso UDP es más rápido.
- El **3 way handshake**: Es mecanismo para generar una conversación y establecer una conexión fiable y segura entre dos dispositivos (cliente y servidor) antes de intercambiar datos. Supongamos que A y B se quieren comunicar, B no lo sabe, para eso A le debe enviar un **TCP Flag** (hay 6 bits, y el bit de la bandera **SYN** es para que sepan que se quiere iniciar una conversación, B activa 2 bits **SYN/ACK** para que B le diga a A, ya recibí tu mensaje de iniciar (SYN) y manda el ACK (Okay), de ahí A le debe mandar un ACK (Okay) como confirmación. lo usan para saber que puertos están abiertos.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### 📅 26 de Enero de 2026

- Repaso de la clase del 21 de Enero
- Qué es **Trouble Shooting**: La manera de encontrar la raíz del problema.
- Qué es un **Falso Positivo**: Cuando el antivirus te manda una alerta por alguna herramienta que tiene alguna firma de vulnerabilidades que se buscan.
- Qué es un **Falso Negativo**: Ocurre cuando un sistema de defensa (antivirus, IDS, WAF) no detecta una amenaza real, clasificando erróneamente un ataque como tráfico o actividad legítima.
- **NVD**: National Vulnerability Databases: Es el repositorio central del gobierno de EE. UU. (NIST) para información sobre vulnerabilidades de seguridad de software.
- Qué es una **Vulnerabilidad**: Es una debilidad, fallo o deficiencia en el diseño, implementación o gestión de un sistema informático, software, hardware o procesos humanos. 
- Qué es un **Exploit**: Es un programa, fragmento de código o técnica que aprovecha una vulnerabilidad de seguridad en software o hardware para realizar acciones no autorizadas.
- Qué es un **Risk**: Una probabilidad de que una amenaza (interna o externa) explote una vulnerabilidad en los sistemas de información, causando un impacto negativo como la pérdida, robo, corrupción o divulgación no autorizada de datos.
- Qué es **Stride**: STRIDE es un modelo utilizado para identificar amenazas potenciales durante el diseño de sistemas y aplicaciones. (**Threat Intelligence**)
- Qué es un **Mittre**: MITRE ATT&CK es una base de conocimiento global que clasifica tácticas y técnicas de atacantes reales para mejorar la detección y defensa activa. (**Threat Analysis**)
- Qué es un **Hacker**: Es una persona que piensa fuera de la caja, una persona que logra hacer que un programa funcione de una manera en la que no fue programada.
- Qué es el **Trouble Shooting**: Es el proceso sistemático de identificar, diagnosticar y corregir fallas, vulnerabilidades o incidencias que afectan la integridad, confidencialidad o disponibilidad de la información en sistemas, redes y aplicaciones. 



Falso positivo Falso negativo

Herramientas comunes: tenable, nessus } Herramientas comerciales Qualys, OpenVAS } Open Source

NVD national vulnerability dataBase

Vulnerabilidad Es donde hay una brecha donde el atacante puede usar un exploit

Exploit: Un exploit es un programa, técnica o fragmento de código diseñado para aprovechar una vulnerabilidad en un sistema informático. Risk: El riesgo se define como la posibilidad de que ocurra un daño o perjuicio y sus posibles consecuencias.

           Stride
Son Firework{ Mittre

Hacker: es Alguien que es capas de hacer que un sistema funcione de una forma para la cual no fue diseñana Motivaciones: Necesidades, ideología y/o el dinero

Scrip Kiddle: Una persona que busca put and play

Tipos de Hacker: -White hacker: Un hacker etico -Black hacker: Ciber delincuentes -Gray hacker: Sons los dos

Hacktivisun -Gov sponsorship -Svicidal Hackers

Blue Team vs Red Team Purple did
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### 📅 26 de Enero de 2026

Repaso de la clase pasada.

- Los listeners devuelven una shell de super usuario, esto es porque no se tenían los mecanismos para comprobar.
- Si entramos a la NVD veremos el **VSFTPD** y debe estar en el **2.3.4**.
- 




















