
#ifndef FASE_H
#define FASE_H
namespace TrabalhoJogo
{
	namespace Fases
	{
		class Fase
		{
			protected:
				//ListaEntidades lista_ents;
				//Gerenciador_colisoes GC;
				void criarInimFaceis();
				void criarPlataformas();
				void virtual criarInimigos() = 0;
				void virtual criarCenario() = 0;
				void virtual criarObstaculo() = 0;

			public:
				Fase();
				~Fase();
				void virtual executar() = 0;
				
		};
	
	}
}



#endif // !FASE_H
