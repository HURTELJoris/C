#pragma once
#include "De.h"

class DeHisto : public De
{
	Q_OBJECT;

	int tab[7];
	int histoSize;

	void historize(int n);

public:
	DeHisto();
	void jet(bool notifyHisto = true);
	void jet(int n);
	int getHistoSize() { return histoSize; }
	int getHistoValue(int index);

signals:
	void histoUpdated();
};


