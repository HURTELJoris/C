#include "DeHisto.h"

void DeHisto::historize(int n)
{
	if (histoSize < 7)
	{
		tab[histoSize++] = n;
	}
	else
	{
		for (int i = 0; i < 6; i++)
		{
			tab[i] = tab[i + 1];
		}

		tab[6] = n;
	}
}

DeHisto::DeHisto()
	: De(0)
{
	for (int i = 0; i < 7; i++) tab[i] = 0;

	histoSize = 0;
}

void DeHisto::jet(bool notifyHisto)
{
	(*this)++;
	int n;
	n += (*this);
	historize(n);
	if (notifyHisto)
		emit histoUpdated();
}

void DeHisto::jet(int n)
{
	for (int i = 0; i < n; i++) jet(false);
	emit histoUpdated();
}

int DeHisto::getHistoValue(int index)
{
	if (index < histoSize)
		return tab[index];
	return -1;
}

