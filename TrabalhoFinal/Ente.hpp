

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
			sf::Drawable* pFig = nullptr;

		public:
			Ente();
			virtual ~Ente();

			virtual void executar() = 0;

			void desenhar();

			static void setGG(Gerenciadores::Gerenciador_Grafico* pG);

			void setFigura(sf::Drawable* fig) { pFig = fig; }

			sf::Drawable* getFigura() const { return pFig; }
	};
}

#endif // !ENTE_H
