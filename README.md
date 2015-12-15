# Computers and Computer Scientists
## Hópur 32
### Tilgangur
Þetta forrit var unnið í T-113-VLN1, Verklegt námskeið 1 á haustönn 2015 í Háskólanum í Reykjavík. Forritið leyfir notanda að skrá tölvunarfræðinga (nafn, kyn, fæðingarár og dánarár ef við á) og  tölvur (nafn, tegund og byggingarár ef við á). Einnig gerir forritið notanda kleyft að skoða og bæta við tengingum (many-to-many) milli tölva og tölvunarfræðinga.  
### Yfirlit
Áætlað er að notandi skrái inn þekktar persónur úr sögu tölvunarfræðinnar, sem og tölvur. Þessar upplýsingar eru geymdar í þremur töflum í SQLite gagnagrunni. Ein sem geymir upplýsingar um tölvunarfræðinga, önnur sem geymir upplýsingar um tölvurnar og sú þriðja er tengitafla sem geymir ID fyrir tölvunarfræðingana og tölvunar úr hinum tveimur töflunum. 
### Eiginleikar forritsins:
*	Bæta tölvunarfræðingi við lista
*	Eyða tölvunarfræðingi af lista
*	Skoða lista af tölvunarfræðingum og raða eftir:
  *	Fornafni (stafrófsröð og öfug stafrófsröð)
  *	Eftirnafni (stafrófsröð og öfug stafrófsröð)
  *	Kyni
  *	Fæðingarári
*	Leita að tölvunarfræðingi í lista
  *	Styður bæði há- og lástafi
*	Bæta tölvu við lista
*	Eyða tölvu af lista
*	Skoða lista af tölvum og raða eftir:
  *	Nafni (stafrófsröð og öfug stafrófsröð)
  *	Tegund
  * Byggingarári
*	Leita að tölvu í lista
*	Bæta við tengingum milli tölva og tölvunarfræðinga 
*	Skoða tengingar milli tölva og tölvunarfræðinga
  *	Sjá alla tölvunarfræðinga sem eru tengdir ákveðinni tölvu (m.v. ID)
  *	Sjá allar tölvur sem eru tengdir ákveðnum tölvunarfræðingi (m.v. ID)
  
### Aðrar upplýsingar
Þegar notandi bætir við nýjum tölvunarfræðingi / nýrri tölvu / nýrri tengingu þá er fyllt inn í viðeigandi töflu í SQLite gagnagrunninum með upplýsingunum frá notenda. Aðgerðir, svo sem leit (search) og uppröðun (sort) eru framkvæmdar á gögnunum í SQLite gagnagrunninum og eru þannig SQL skipanir nýttar. Gögnin eru svo færð úr gagnagrunninum yfir í vektor í lok hverrar aðgerðar. 

Allar upplýsingar um tölvunarfræðinga eru geymdar með lágstöfum í gagnagrunninum til þess að leit og uppröðun sé óháð há-og lágstöfum. Fyrsti stafur í fornafni og eftirnafni er þó skrifaður út með stórum staf. Við ákváðum hins vegar að geyma nafn tölvanna ekki með lágstöfum í gagnagrunninum (það er geymt á sama formi og skrifað er inn) því að þau hafa ekki endilega bara hástaf fremst í nafninu (sbr. iPhone).

Athugað er eftir villum í öllu sem notandi slær inn(eða slær ekki inn) og eru viðeigandi villuskilaboð birt í forritinu ef svo á við. 
Ef notandi vill eyða út tölvu, tölvunnarfræðingi eða tengingu milli þeirra poppar upp gluggi sem spyr hvor notandi sé viss um að hann vilji eyða viðkomandi tölvu, tölvunnarfræðingi eða tengingu. 

### Forritið er lagskipt og inniheldur fjórtán klasa:
*	Presentation Layer: 
  *	MainWindow
  *	AddScientistDialog
  *	AddComputerDialog
  *	AddConnectionDialog
  *	RemoveConnectionDialog
*	Business Layer: 
  *	ComputerServices
  *	ScientistServices
  *	CompSciConnectionServices
*	Buisness Layer:
  *	Computer
  *	Scientist
* Data Layer
  *	BaseRepository
  *	ComputerRepository
  *	ScientistRepository
  *	CompSciConnectionRepository

Til þess að nota gagnagrunninn okkar þarf að færa skrána Database.sqlite í eigin build möppu og passa að hafa engar aðrar build möppur.

### Punktar um hópastarfið
Samstarfið gekk vel og allir lögðu sitt af mörkum. Við viljum taka það fram að Ármann Ari gat ekki pushað neinum kóða frá sér þar sem QT virkaði ekki. Við reyndum að laga það og Bjarni Leifsson sem er skósveinninn okkar lenti í sama veseni með QT hjá sér og reyndi að laga það en án árangurs. Ármann tók því að sér önnur verkefni í ferlinu.

### Meðlimir:
*	Axel Bogason
*	Ármann Ari Árnason
*	Hafdís Inga Alexandersdóttir
*	Hanna Ragnarsdóttir
*	Sverrir Þór Sigurðarson





