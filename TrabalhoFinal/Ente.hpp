

#ifndef ENTE_H
#define ENTE_H

#include <SFML/Graphics.hpp>
#include "Gerenciador_Grafico.hpp"

namespace TrabalhoJogo
{
	class Ente
	{
		protected:
			int id;
			static Gerenciadores::Gerenciador_Grafico* pGG;
		public:
			Ente();
			virtual ~Ente();
			void virtual executar() = 0;
			void desenhar();
			static void setGG(Gerenciadores::Gerenciador_Grafico* pG);

	};
}

#endif // !ENTE_H
