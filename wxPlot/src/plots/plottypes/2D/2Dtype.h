#pragma once

#include "line/line.h"
#include "scatter/scatter.h"
#include "spline/spline.h"
#include "bar/bar.h"
#include "../../plottools/plottools.h"

class _2DType {

private:
	// Type select
	WXPLOT_TYPE wxPlotType = WXPLOT_TYPE_LINE;

	// The data
	double minX = 0, maxX = 0, minY = 0, maxY = 0;
	std::vector<std::vector<double>> data;

	// Charts
	Line line;
	Scatter scatter;
	Spline spline;
	Bar bar;

public:
	// Constructor
	_2DType() { }

	// Setters
	void setWxPlotType(const WXPLOT_TYPE wxPlotType);
	void setRadius(const wxCoord radius);
	void fillCircles(const bool fillCircle);
	void setData(const std::vector<std::vector<double>>& data);
	void setPlotStartWidth(const wxCoord plotStartWidth);
	void setPlotStartHeight(const wxCoord plotStartHeight);
	void setPlotEndWidth(const wxCoord plotEndWidth);
	void setPlotEndHeight(const wxCoord plotEndHeight);
	void setYlim(const double minY, const double maxY);

	// Functions
	bool drawType(wxDC& dc);
};