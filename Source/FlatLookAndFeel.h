#ifndef FLATLOOKANDFEEL_H_INCLUDED
#define FLATLOOKANDFEEL_H_INCLUDED

#include "JuceHeader.h"

class FlatLookAndFeel : public LookAndFeel_V3
{
public:

	FlatLookAndFeel();
	virtual ~FlatLookAndFeel();

	virtual void drawRotarySlider(Graphics &g, int x, int y, int width, int height,
		float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider &slider);

	virtual void drawButtonBackground(Graphics& g, Button& button, const Colour& backgroundColour, bool isMouseOverButton, bool isButtonDown);

	virtual void drawToggleButton(Graphics& g, ToggleButton& button, bool isMouseOverButton, bool isButtonDown);

	virtual void drawTickBox(Graphics& g, Component& component, float x, float y, float w, float h,
		bool ticked, bool isEnabled, bool isMouseOverButton, bool isButtonDown);

	virtual void drawProgressBar(Graphics& g, ProgressBar& progressBar, int width, int height, double progress, const String& textToShow);

	virtual void drawScrollbarButton(Graphics& g, ScrollBar& scrollbar, int width, int height,
		int buttonDirection, bool isScrollbarVertical, bool isMouseOverButton, bool isButtonDown);

	virtual void drawScrollbar(Graphics& g, ScrollBar& scrollbar, int x, int y, int width, int height,
		bool isScrollbarVertical, int thumbStartPosition, int thumbSize, bool isMouseOver, bool isMouseDown);

	virtual ImageEffectFilter* getScrollbarEffect();

	virtual void drawTextEditorOutline(Graphics& g, int width, int height, TextEditor& textEditor);

	virtual void drawPopupMenuBackground(Graphics& g, int width, int height);

	virtual void drawMenuBarBackground(Graphics& g, int width, int height, bool isMouseOverBar, MenuBarComponent& menuBar);

	virtual void drawComboBox(Graphics& g, int width, int height, bool isButtonDown, int buttonX, int buttonY, int buttonW, int buttonH, ComboBox& box);

	//virtual const Font getComboBoxFont (ComboBox& box);

	virtual void drawLinearSlider(Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, 
		const Slider::SliderStyle style, Slider& slider);

	virtual int getSliderThumbRadius(Slider& slider);

	virtual Button* createSliderButton(bool isIncrement);

	virtual ImageEffectFilter* getSliderEffect();

	virtual void drawCornerResizer(Graphics& g, int w, int h, bool isMouseOver, bool isMouseDragging);

	virtual Button* createDocumentWindowButton(int buttonType);

	virtual void positionDocumentWindowButtons(DocumentWindow& window,
		int titleBarX, int titleBarY,
		int titleBarW, int titleBarH,
		Button* minimiseButton,
		Button* maximiseButton,
		Button* closeButton,
		bool positionTitleBarButtonsOnLeft);


private:
	//==============================================================================
	DropShadowEffect scrollbarShadow;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FlatLookAndFeel)

};

#endif  // FLATLOOKANDFEEL_H_INCLUDED
