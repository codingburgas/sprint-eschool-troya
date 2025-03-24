#include "..//include/hwQuestions.h"



vector<pair<string, string>> programmingQuestions = {
    {"What keyword is used to define a function in Python?", "def"},
    {"Which operator is used for pointer dereferencing in C++?", "*"},
    {"What is the default data type of numbers in JavaScript?", "number"},
    {"Which keyword is used to declare constants in Java?", "final"},
    {"What does 'cout' do in C++?", "Prints output"},
    {"What is the correct syntax to declare a variable in JavaScript?", "let x = 5;"},
    {"What is the main purpose of Python's 'pass' statement?", "Placeholder"},
    {"Which symbol is used for single-line comments in Python?", "#"},
    {"Which keyword is used to create a class in Java?", "class"},
    {"What is the file extension for C++ header files?", ".h"},
    {"What is the name of Java’s virtual machine?", "JVM"},
    {"Which function is used to read input in C++?", "cin"},
    {"How do you define a list in Python?", "[]"},
    {"What is the main loop structure in JavaScript?", "for"},
    {"Which statement is used to exit a loop in Python?", "break"}
};


vector<pair<string, string>> softwareDevelopmentQuestions = {
    {"What is the first phase of the software development lifecycle?", "Planning"},
    {"Which methodology is known for its iterative development approach?", "Agile"},
    {"What is the purpose of unit testing?", "Test individual components"},
    {"Which document outlines software requirements?", "SRS"},
    {"What is a commonly used version control system?", "Git"},
    {"Which language is used for Android app development?", "Java"},
    {"What is the full form of API?", "Application Programming Interface"},
    {"Which tool is used for continuous integration?", "Jenkins"},
    {"What is a software framework?", "Reusable code structure"},
    {"What is the purpose of debugging?", "Fixing errors"},
    {"Which testing type verifies the entire software?", "System testing"},
    {"What is the term for a software bug that produces unexpected behavior?", "Defect"},
    {"Which diagram represents system interactions?", "Use case diagram"},
    {"What is refactoring in software development?", "Improving code structure"},
    {"What does SDLC stand for?", "Software Development Life Cycle"}
};

vector<pair<string, string>> databaseQuestions = {
    {"What does SQL stand for?", "Structured Query Language"},
    {"Which SQL command is used to retrieve data?", "SELECT"},
    {"What is the primary key used for?", "Unique identification"},
    {"Which SQL clause filters records?", "WHERE"},
    {"What does 'JOIN' do in SQL?", "Combines tables"},
    {"Which database type is best for relationships?", "Relational database"},
    {"What does ACID stand for in databases?", "Atomicity, Consistency, Isolation, Durability"},
    {"Which command deletes a database?", "DROP DATABASE"},
    {"What does 'VARCHAR' store?", "Variable-length string"},
    {"Which database is commonly used for web applications?", "MySQL"},
    {"What does an index do in a database?", "Speeds up searches"},
    {"What is the function of a foreign key?", "Links tables"},
    {"Which SQL command removes duplicates?", "DISTINCT"},
    {"What is a NoSQL database?", "Non-relational database"},
    {"Which database is used by Facebook?", "MySQL"}
};


vector<pair<string, string>> webDevelopmentQuestions = {
    {"What does HTML stand for?", "HyperText Markup Language"},
    {"Which language is used to style web pages?", "CSS"},
    {"Which JavaScript function changes HTML content?", "innerHTML"},
    {"What is the purpose of React?", "Build UI components"},
    {"Which HTML tag defines a hyperlink?", "a"},
    {"What is the role of a web server?", "Hosts websites"},
    {"Which CSS property changes text color?", "color"},
    {"What does 'flexbox' do in CSS?", "Aligns elements"},
    {"Which framework is popular for frontend web development?", "React"},
    {"What is Bootstrap used for?", "CSS framework"},
    {"Which database is commonly used in web apps?", "MongoDB"},
    {"What is the latest version of JavaScript?", "ES6"},
    {"Which HTTP method is used to submit form data?", "POST"},
    {"What does AJAX stand for?", "Asynchronous JavaScript and XML"},
    {"Which protocol is used for secure web communication?", "HTTPS"}
};


vector<pair<string, string>> algorithmsQuestions = {
    {"What is the worst-case time complexity of quicksort?", "O(n^2)"},
    {"Which data structure follows LIFO?", "Stack"},
    {"What is the time complexity of binary search?", "O(log n)"},
    {"Which sorting algorithm is the fastest on average?", "Merge Sort"},
    {"Which data structure uses FIFO?", "Queue"},
    {"What is a linked list?", "Sequence of nodes"},
    {"What is the space complexity of an array?", "O(n)"},
    {"Which algorithm finds the shortest path in a graph?", "Dijkstra's algorithm"},
    {"Which tree is self-balancing?", "AVL Tree"},
    {"What is the purpose of a hash table?", "Efficient lookup"},
    {"Which algorithm is used for sorting in Python's 'sort()'?", "Timsort"},
    {"What is a priority queue?", "Queue with priorities"},
    {"Which sorting algorithm is the simplest?", "Bubble Sort"},
    {"What is a recursive function?", "Calls itself"},
    {"Which algorithm is used for searching in an unordered list?", "Linear search"}
};


vector<pair<string, string>> roboticsQuestions = {
    {"What is Arduino primarily used for?", "Prototyping and electronics projects"},
    {"What programming language is commonly used for Arduino?", "C++"},
    {"What is the main purpose of Raspberry Pi?", "A small computer for various applications"},
    {"What is PWM (Pulse Width Modulation) used for in Arduino?", "Controlling motor speed and LED brightness"},
    {"How many digital I/O pins does an Arduino Uno have?", "14"},
    {"What operating system does Raspberry Pi typically use?", "Raspberry Pi OS"},
    {"What is the function of an H-Bridge in robotics?", "Control the direction of DC motors"},
    {"Which communication protocols are commonly used in Arduino projects?", "I2C, SPI, UART"},
    {"What is the difference between a microcontroller and a microprocessor?", "A microcontroller is a compact integrated circuit with a processor, memory, and input/output peripherals"},
    {"How do you power an Arduino board?", "Via USB or an external power supply"},
    {"What is the function of the setup() and loop() functions in Arduino?", "setup() runs once, loop() runs continuously"},
    {"Which library is commonly used for controlling servos in Arduino?", "Servo.h"},
    {"What is the purpose of the GPIO pins on Raspberry Pi?", "General Purpose Input/Output for connecting external components"},
    {"How do you connect a Raspberry Pi to the internet?", "Via Wi-Fi or Ethernet"},
    {"What is I2C used for in robotics?", "Communication between microcontrollers and sensors"}
};


vector<pair<string, string>> machineLearningQuestions = {
    {"What is the difference between supervised and unsupervised learning?", "Supervised has labeled data, unsupervised does not"},
    {"What does CNN stand for in machine learning?", "Convolutional Neural Network"},
    {"What is the purpose of a loss function in training a model?", "To measure how well the model is performing"},
    {"What is overfitting in machine learning?", "A model that performs well on training data but poorly on new data"},
    {"What is a neural network?", "A computational system inspired by the human brain"},
    {"What does the activation function do in a neural network?", "Introduces non-linearity"},
    {"What is backpropagation?", "An algorithm to adjust weights in neural networks"},
    {"What are some common libraries used for machine learning in Python?", "TensorFlow, PyTorch, scikit-learn"},
    {"What is the difference between classification and regression?", "Classification predicts categories, regression predicts values"},
    {"What is a decision tree in machine learning?", "A tree-like model used for decision making"},
    {"What is reinforcement learning?", "A learning method using rewards and penalties"},
    {"What is feature engineering?", "The process of creating meaningful input features"},
    {"What is an epoch in machine learning?", "One full pass of the training data through the model"},
    {"What is the purpose of a validation set?", "To tune hyperparameters and prevent overfitting"},
    {"What is deep learning?", "A subset of ML that uses deep neural networks"}
};


vector<pair<string, string>> iotQuestions = {
    {"What is IoT?", "A network of interconnected devices"},
    {"What is the role of MQTT in IoT?", "A lightweight messaging protocol for IoT devices"},
    {"What is an example of an IoT device?", "Smart thermostat"},
    {"What is the purpose of an edge device in IoT?", "To process data near the source"},
    {"How does IoT use cloud computing?", "For data storage and remote access"},
    {"What is an IoT gateway?", "A bridge between devices and the internet"},
    {"What security risks are associated with IoT devices?", "Hacking, data breaches, privacy issues"},
    {"What communication protocols are commonly used in IoT?", "Wi-Fi, Bluetooth, Zigbee, LoRa"},
    {"What is the difference between smart home and industrial IoT?", "Smart home focuses on consumer devices, IIoT is for industrial use"},
    {"What is LPWAN (Low Power Wide Area Network) used for?", "Long-range communication for IoT"},
    {"What sensors are commonly used in IoT applications?", "Temperature, motion, humidity sensors"},
    {"What is the purpose of an actuator in IoT?", "To perform actions based on data"},
    {"What is the role of APIs in IoT?", "To enable communication between devices and software"},
    {"How does 5G impact IoT?", "Faster connectivity and lower latency"},
    {"What is the difference between IoT and IIoT (Industrial IoT)?", "IIoT is used for manufacturing and heavy industries"}
};


vector<pair<string, string>> automationQuestions = {
    {"What is a sensor?", "A device that detects changes in the environment"},
    {"What is an actuator?", "A device that moves or controls a system"},
    {"How do infrared sensors work?", "By detecting infrared radiation"},
    {"What type of sensor is used for measuring temperature?", "Thermistor or temperature sensor"},
    {"What is the function of a proximity sensor?", "To detect objects without contact"},
    {"What is automation?", "Using technology to perform tasks with minimal human input"},
    {"What is the difference between open-loop and closed-loop control systems?", "Closed-loop uses feedback, open-loop does not"},
    {"What is a PID controller?", "A control loop mechanism for maintaining stability"},
    {"What is the purpose of a relay in automation?", "To switch high-power devices using low-power control"},
    {"What are some examples of industrial automation?", "Robotic arms, conveyor belts"},
    {"What is SCADA used for in automation?", "Supervisory control and data acquisition"},
    {"What type of sensor is used for detecting motion?", "PIR (Passive Infrared) sensor"},
    {"What is the purpose of an ultrasonic sensor?", "To measure distance using sound waves"},
    {"What is the difference between analog and digital sensors?", "Analog provides continuous signals, digital provides discrete signals"},
    {"What are some common programming languages used in automation?", "Ladder Logic, Python, C++"}
};

vector<pair<string, string>> networkingQuestions = {
    {"What is the main function of a router?", "To forward data between networks"},
    {"What is the difference between a switch and a hub?", "A switch sends data only to the intended device, a hub sends to all"},
    {"What does DHCP stand for?", "Dynamic Host Configuration Protocol"},
    {"What is a VLAN used for?", "To create separate networks within a switch"},
    {"What are the main IP address classes?", "A, B, C, D, E"},
    {"What does NAT do?", "It allows multiple devices to share one public IP"},
    {"What does QoS mean in networking?", "Quality of Service – prioritizing network traffic"},
    {"What is the OSI model?", "A 7-layer model for network communication"},
    {"How is TCP different from UDP?", "TCP is reliable, UDP is faster but unreliable"},
    {"What is CIDR notation used for?", "Flexible allocation of IP addresses"},
    {"What is the purpose of STP (Spanning Tree Protocol)?", "To prevent network loops"},
    {"How do you configure a MikroTik router?", "Using WinBox or command line"},
    {"What is VPN and what types exist?", "A Virtual Private Network, types: PPTP, L2TP, OpenVPN, IPSec"},
    {"What does SNMP do?", "Monitors network devices"},
    {"What is a firewall used for?", "To filter and protect network traffic"},
};
vector<pair<string, string>> operatingSystemsQuestions = {
    {"What is the main difference between Windows Server and Linux?", "Windows Server is proprietary, Linux is open-source"},
    {"How do you create a new user in Linux?", "Using adduser or useradd command"},
    {"What is Active Directory used for?", "Managing users and resources in Windows Server"},
    {"What are the main file systems in Linux?", "ext4, XFS, Btrfs"},
    {"How do you change file permissions in Linux?", "Using chmod command"},
    {"What does the 'ls' command do in Linux?", "Lists files and folders"},
    {"What is PowerShell used for?", "Automation and scripting in Windows"},
    {"What is a process in an operating system?", "A running program in memory"},
    {"How is 'apt' different from 'yum'?", "apt is for Debian-based, yum is for RedHat-based systems"},
    {"How do you restart a service in Windows Server?", "Using 'net stop/start' or 'Restart-Service'"},
    {"What is the Linux Kernel?", "The core of the Linux operating system"},
    {"What is the difference between a hard link and a soft link?", "Hard links point to inodes, soft links are shortcuts"},
    {"How do you check system load in Linux?", "Using top or htop command"},
    {"How do you set a static IP in Windows Server?", "Through Control Panel → Network settings"},
    {"How do you install a package in Linux?", "Using apt install or yum install"},
};

vector<pair<string, string>> cloudComputingQuestions = {
    {"What is cloud computing?", "Providing IT resources over the internet"},
    {"What are the main cloud service models?", "IaaS, PaaS, SaaS"},
    {"What is the difference between public and private cloud?", "Public is shared, private is for one organization"},
    {"What is AWS EC2?", "A service for virtual servers in AWS"},
    {"What is Google Cloud Compute Engine?", "A service for virtual machines in Google Cloud"},
    {"What does AWS S3 do?", "Stores objects like files and databases"},
    {"What is IAM in AWS used for?", "Managing user access and permissions"},
    {"What is Kubernetes used for?", "Managing and automating containerized applications"},
    {"What is the difference between serverless and traditional servers?", "Serverless scales automatically without manual management"},
    {"What is AWS VPC?", "A private network inside AWS"},
    {"What databases does Google Cloud offer?", "Cloud SQL, BigQuery, Firestore"},
    {"How do you set up a Load Balancer in AWS?", "Using Elastic Load Balancer (ELB)"},
    {"What is Google Cloud Functions?", "A serverless service for running code on demand"},
    {"What is AWS Lambda?", "A serverless service for running code without a server"},
    {"How do you secure cloud services?", "Using IAM, encryption, and network rules"},
};

vector<pair<string, string>> graphicDesignQuestions = {
    {"What is raster vs. vector?", "Raster = pixels, Vector = scalable."},
    {"What is CMYK used for?", "Printing."},
    {"What does DPI affect?", "Print sharpness."},
    {"What is kerning?", "Space between letters."},
    {"What is tracking?", "Spacing across words."},
    {"What is leading?", "Spacing between lines."},
    {"What is the rule of thirds?", "3x3 grid for balance."},
    {"RGB vs CMYK?", "RGB = screens, CMYK = print."},
    {"How do layers help in design?", "Organize elements separately."},
    {"What is a mockup?", "A preview of a design."},
    {"What is vectorization?", "Convert pixels to paths."},
    {"What is negative space?", "Empty space in design."},
    {"What are complementary colors?", "Opposite on the color wheel."},
    {"What is a brand identity?", "Logo, colors, typography."},
    {"What is typography?", "The style of text."}
};

vector<pair<string, string>> webDesignQuestions = {
    {"HTML vs HTML5?", "HTML5 has new features."},
    {"What is CSS used for?", "Styling web pages."},
    {"What does JavaScript do?", "Adds interactivity."},
    {"What is responsive design?", "Adapts to screen sizes."},
    {"What are media queries?", "CSS for different screens."},
    {"What is UX?", "User experience."},
    {"What is absolute vs. relative positioning?", "Absolute = fixed, Relative = adjustable."},
    {"What is a wireframe?", "Website layout sketch."},
    {"Why is website speed important?", "SEO and user retention."},
    {"What is a favicon?", "Small icon for websites."},
    {"What is a landing page?", "A conversion-focused page."},
    {"What is front-end vs. back-end?", "Front = UI, Back = data."},
    {"What is mobile-first design?", "Design for mobile first."},
    {"What is a CDN?", "Speeds up content delivery."},
    {"What is accessibility in web design?", "Making sites usable for all."}
};

vector<pair<string, string>> animationQuestions = {
    {"2D vs 3D animation?", "2D = flat, 3D = depth."},
    {"What are keyframes?", "Main animation frames."},
    {"What is tweening?", "Smooth transition between frames."},
    {"What is squash and stretch?", "Exaggerated movement principle."},
    {"What is frame rate?", "Frames per second."},
    {"What is motion capture?", "Recording real-life movement."},
    {"What is rigging?", "Adding bones to a model."},
    {"What is a storyboard?", "Visual plan of animation."},
    {"What is onion skinning?", "See multiple frames at once."},
    {"What is a parallax effect?", "Different layers move at different speeds."},
    {"What is rotoscoping?", "Tracing over real footage."},
    {"What does lighting do in animation?", "Adds mood and realism."},
    {"What is anticipation in animation?", "Small movement before action."},
    {"What is easing in animation?", "Controls motion speed."},
    {"What is stop motion?", "Frame-by-frame real object movement."}
};