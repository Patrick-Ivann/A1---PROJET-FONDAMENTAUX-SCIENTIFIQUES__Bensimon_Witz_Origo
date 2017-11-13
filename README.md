
	

Définitions

	 	Le pouls désigne  la perception au toucher de l'artère battante, permettant, d'évaluer les battements cardiaques, mais 			d'apporter également d'autres renseignements

	 	La fréquence cardiaque est le nombre de battements cardiaques (ou pulsations) par unité de temps, généralement la minute

	 	Le rythme cardiaque est le mécanisme à l’origine de la contraction des ventricules

	 	Chez les humains, la fréquence cardiaque au repos varie selon l'âge : 
	 	 Nouveau-né : 140 +/- 50 
	 	 1–2 ans : 110 +/- 40 
	 	 3–5 ans : 105 +/- 35 
	 	 6–12 ans : 95 +/- 30 
	 	 Adolescent ou adulte : 70 +/- 10 
	 	 Personne âgée : 65 +/- 5



Modules Cardio ( construire un cardio-fréquencemètre se basant sur la photopléthysmographie, en détectant les battements du cœur 		en mesurant le volume de sang dans les tissus au moyen d'une source de lumière et d'un détecteur. )

		contruice le circuit exploitant la photopléthysmographie donc en utilisant un photostransistor et une LED infrarouge en 		transposant le fonction du circuit 1 sur le circuit 2 car il nous manque le module LM538 , il faut ensuite tout envoyer 		vers l'arduino.
		Cette derniere va donc traiter et mesure le signa sur la base d'un temps fixe.

		Il faut cinder le code en plusieurs modules le main.Cette est sur la gestion de l'arduino est donc est conçu sur le meme 		type de modele (un loop et un setup )
		les fonction seront prototypées dans le fichier header et les définitions se feront dans le cardio.C. Les fontions 			auront pour but de calculer la frequence cardiaque , et de recevoir les informations provenant du récepteur infrarouge


Modules LEDS (construire un affichage original du pouls à travers un cœur de LEDS rouges. (formant un cœur) soit allumé à chaque 		battement de cœur détect)

		constuire un circuit qui va servir d'output , suivant le clignotement des ld on peut avoir sa mesure de fréquence 			cardiaque , les données viendront de l'arduino en utilisant la sortie numérique pour avoir une signal à deux états , il 		y a donc encore une notre partie logicelle arduino a produire donc de la gestion de signal provenant de celle-ci, 			l'utilisateur doit avoir la possibilité de chpoisor le mode d'allumade des led , soit séquentielle soit autremment.

		Il faut donc un fichier coeur.C , qui va permettre d'appeler les fonctions prototypées dans le coeur.h et dans le 			param.h 
		le param.h va contenir les fonctions de parametrage des leds 








