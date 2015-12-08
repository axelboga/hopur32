# Computers and Computer Scientists
## Hópur 32
### Tilgangur
Þetta forrit var unnið í T-113-VLN1, Verklegt námskeið 1 á haustönn 2015 í Háskólanum í Reykjavík. Forritið leyfir notanda að skrá tölvunarfræðinga (nafn, kyn, fæðingarár og dánarár ef við á) og  tölvur (nafn, tegund og byggingarár ef við á). Einnig gerir forritið notanda kleyft að skoða tengingar (many-to-many) milli tölva og tölvunarfræðinga.  
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
Þegar notandi bætir við nýjum tölvunarfræðingi / nýrri tölvu / nýrri tengingu þá er fyllt inn í viðeigandi töflu í SQLite gagnagrunninum með upplýsingunum frá notenda. Aðgerðir, svo sem leit (search) og uppröðun (sort) eru framkvæmdar á gögnunum í SQLite gagnagrunninum og eru þannig SQL skipanir nýttar. Gögnin eru svo færð úr gagnagrunninum yfir í vektor í lok hverrar aðgerðar. Innihald vektorsins er svo skrifað út á skjáinn.

Allar upplýsingar um tölvunarfræðinga eru geymdar með lágstöfum í gagnagrunninum til þess að leit og uppröðun sé óháð há-og lágstöfum. Fyrsti stafur í fornafni og eftirnafni er þó skrifaður út með stórum staf. Við ákváðum hins vegar að geyma nafn tölvanna ekki með lágstöfum í gagnagrunninum (það er geymt á sama formi og skrifað er inn) því að þau hafa ekki endilega bara hástaf fremst í nafninu (sbr. iPhone). Leit og uppröðun í þeim lista er þó háð há- og lágstöfum.

Athugað er eftir villum í öllu sem notandi slær inn. Ef notandi slær inn rangt inntak eru viðeigandi villuskilaboð skrifuð út á skjáinn og votandi fær að slá inn aftur (ath ef notandi slær t.d. inn 'y' eða 'ye' þegar er í boði að svara yes eða no, er það túlkað sem "yes" en ef notandi slær t.d. 'k' er það túlkað sem villa). 

#### Forritið er lagskipt og inniheldur átta klasa:
*	Presentation Layer: 
  *	UI
*	Business Layer: 
  *	ComputerServices
  *	ScientistServices
*	Buisness Layer:
  *	Computer
  *	Scientist
* Data Layer
  *	BaseRepository
  *	ComputerRepository
  *	ScientistRepository

Einungis er skrifað út í UI klasanum. 
Tengingar fyrir tölvur eru tæklaðar í ComputerServices og ComputerRepository og tengingar fyrir tölvunnarfræðinga í ScientistServices og ScientistRepository.

##### Hvernig maður fer inn í tengingarnar: 
* Í menu er slegið inn 3 fyrir Connections
  * Þar er valið 1 (add connections) til að bæta við tengingu milli tölva og tölvunarfræðinga
  * Þar er valið 2 (remove connections) til að fjarlægja tengingar milli tölva og tölvunarfræinga
  * Þar er valið 3 (view connections) til að sjá tenginar 

Til þess að nota gagnagrunninn okkar þarf að vista Database.sqlite í eigin build möppu og passa að hafa ekki aðrar build möppur. 

### Meðlimir:
*	Axel Bogason
*	Ármann Ari Árnason
*	Hafdís Inga Alexandersdóttir
*	Hanna Ragnarsdóttir
*	Sverrir Þór Sigurðarson





