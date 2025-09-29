<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>MainWindow</class>
 <widget class="QMainWindow" name="MainWindow">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>1502</width>
    <height>749</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Auto-école</string>
  </property>
  <widget class="QWidget" name="centralwidget">

   <!-- MENU LATERAL -->
   <widget class="QTextEdit" name="menuLateral">
    <property name="geometry">
     <rect>
      <x>20</x>
      <y>0</y>
      <width>171</width>
      <height>561</height>
     </rect>
    </property>
    <property name="html">
     <string>
      &lt;!DOCTYPE HTML&gt;
      &lt;html&gt;&lt;body style="font-family:'Segoe UI'; font-size:12pt; font-weight:700;"&gt;
      &lt;p align="center"&gt;🏠 Tableau de bord&lt;/p&gt;
      &lt;p align="center"&gt;👨‍🎓 Élèves&lt;/p&gt;
      &lt;p align="center"&gt;👨‍🏫 Moniteurs&lt;/p&gt;
      &lt;p align="center"&gt;📅 Planning&lt;/p&gt;
      &lt;p align="center"&gt;🚗 Véhicules&lt;/p&gt;
      &lt;p align="center"&gt;📝 Examens&lt;/p&gt;
      &lt;p align="center"&gt;💳 Paiements&lt;/p&gt;
      &lt;p align="center" style="color:#aa0000;"&gt;Se déconnecter&lt;/p&gt;
      &lt;/body&gt;&lt;/html&gt;
     </string>
    </property>
   </widget>

   <!-- BOUTONS DU HAUT -->
   <widget class="QPushButton" name="btnAccueil">
    <property name="geometry">
     <rect>
      <x>930</x>
      <y>0</y>
      <width>171</width>
      <height>29</height>
     </rect>
    </property>
    <property name="text">
     <string>Accueil</string>
    </property>
   </widget>
   <widget class="QPushButton" name="btnContact">
    <property name="geometry">
     <rect>
      <x>1170</x>
      <y>0</y>
      <width>171</width>
      <height>29</height>
     </rect>
    </property>
    <property name="text">
     <string>Contact</string>
    </property>
   </widget>

   <!-- FORMULAIRE D'AJOUT D'ÉLÈVE -->
   <widget class="QLineEdit" name="lineNom">
    <property name="geometry">
     <rect>
      <x>250</x>
      <y>50</y>
      <width>200</width>
      <height>28</height>
     </rect>
    </property>
    <property name="placeholderText">
     <string>Nom</string>
    </property>
   </widget>
   <widget class="QLineEdit" name="linePrenom">
    <property name="geometry">
     <rect>
      <x>250</x>
      <y>100</y>
      <width>200</width>
      <height>28</height>
     </rect>
    </property>
    <property name="placeholderText">
     <string>Prénom</string>
    </property>
   </widget>
   <widget class="QLineEdit" name="lineTelephone">
    <property name="geometry">
     <rect>
      <x>250</x>
      <y>150</y>
      <width>200</width>
      <height>28</height>
     </rect>
    </property>
    <property name="placeholderText">
     <string>Téléphone</string>
    </property>
   </widget>
   <widget class="QLineEdit" name="lineCategoriePermis">
    <property name="geometry">
     <rect>
      <x>250</x>
      <y>200</y>
      <width>200</width>
      <height>28</height>
     </rect>
    </property>
    <property name="placeholderText">
     <string>Catégorie permis (B, A...)</string>
    </property>
   </widget>
   <widget class="QPushButton" name="btnAjouterEleve">
    <property name="geometry">
     <rect>
      <x>250</x>
      <y>250</y>
      <width>200</width>
      <height>30</height>
     </rect>
    </property>
    <property name="text">
     <string>Ajouter Élève</string>
    </property>
   </widget>

   <!-- RECHERCHE D'ÉLÈVE -->
   <widget class="QTextEdit" name="labelRecherche">
    <property name="geometry">
     <rect>
      <x>550</x>
      <y>80</y>
      <width>200</width>
      <height>31</height>
     </rect>
    </property>
    <property name="html">
     <string>&lt;html&gt;&lt;body&gt;&lt;p&gt;&lt;b&gt;Recherche élève :&lt;/b&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</string>
    </property>
   </widget>
   <widget class="QLineEdit" name="lineRecherche">
    <property name="geometry">
     <rect>
      <x>760</x>
      <y>80</y>
      <width>200</width>
      <height>28</height>
     </rect>
    </property>
   </widget>
   <widget class="QPushButton" name="btnRechercher">
    <property name="geometry">
     <rect>
      <x>980</x>
      <y>80</y>
      <width>100</width>
      <height>28</height>
     </rect>
    </property>
    <property name="text">
     <string>Rechercher</string>
    </property>
   </widget>

   <!-- LISTE DES RESULTATS -->
   <widget class="QListView" name="listEleves">
    <property name="geometry">
     <rect>
      <x>550</x>
      <y>130</y>
      <width>700</width>
      <height>400</height>
     </rect>
    </property>
   </widget>

  </widget>
  <widget class="QMenuBar" name="menubar"/>
  <widget class="QStatusBar" name="statusbar"/>
 </widget>
 <resources/>
 <connections/>
</ui>
