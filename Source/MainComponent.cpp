/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Group")));

    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setButtonText (TRANS("TextButton"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnTop);

    addAndMakeVisible (toggleButton = new ToggleButton ("new toggle button"));
    toggleButton->setButtonText (TRANS("Toggle Button"));
    toggleButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnTop);

    addAndMakeVisible (labelReadOnly = new Label ("new label",
                                                  TRANS("Label (read only)")));
    labelReadOnly->setFont (Font (15.00f, Font::plain));
    labelReadOnly->setJustificationType (Justification::centredLeft);
    labelReadOnly->setEditable (false, false, false);
    labelReadOnly->setColour (TextEditor::textColourId, Colours::black);
    labelReadOnly->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Label (editable)")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (true, true, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    label->addListener (this);

    addAndMakeVisible (comboBox = new ComboBox ("new combo box"));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (String::empty);
    comboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox->addListener (this);

    addAndMakeVisible (textEditor = new TextEditor ("new text editor"));
    textEditor->setMultiLine (true);
    textEditor->setReturnKeyStartsNewLine (true);
    textEditor->setReadOnly (false);
    textEditor->setScrollbarsShown (true);
    textEditor->setCaretVisible (true);
    textEditor->setPopupMenuEnabled (true);
    textEditor->setText (TRANS("Text Editor"));

    addAndMakeVisible (hyperlinkButton = new HyperlinkButton (TRANS("Hyperlink Button"),
                                                              URL ("http://74labs.org")));
    hyperlinkButton->setTooltip (TRANS("http://74labs.org"));
    hyperlinkButton->setButtonText (TRANS("Hyperlink Button"));
    hyperlinkButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnTop);

    addAndMakeVisible (slider1 = new Slider ("new slider"));
    slider1->setRange (0, 10, 0);
    slider1->setSliderStyle (Slider::LinearHorizontal);
    slider1->setTextBoxStyle (Slider::TextBoxAbove, false, 80, 20);
    slider1->addListener (this);

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::Rotary);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::Rotary);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    addAndMakeVisible (slider4 = new Slider ("new slider"));
    slider4->setRange (0, 10, 0);
    slider4->setSliderStyle (Slider::IncDecButtons);
    slider4->setTextBoxStyle (Slider::TextBoxAbove, false, 80, 20);
    slider4->addListener (this);

    addAndMakeVisible (slider5 = new Slider ("new slider"));
    slider5->setRange (0, 10, 0);
    slider5->setSliderStyle (Slider::IncDecButtons);
    slider5->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider5->addListener (this);

    addAndMakeVisible (slider6 = new Slider ("new slider"));
    slider6->setRange (0, 10, 0);
    slider6->setSliderStyle (Slider::TwoValueHorizontal);
    slider6->setTextBoxStyle (Slider::TextBoxAbove, false, 80, 20);
    slider6->addListener (this);

    addAndMakeVisible (slider7 = new Slider ("new slider"));
    slider7->setRange (0, 10, 0);
    slider7->setSliderStyle (Slider::TwoValueHorizontal);
    slider7->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider7->addListener (this);

    addAndMakeVisible (slider8 = new Slider ("new slider"));
    slider8->setRange (0, 10, 0);
    slider8->setSliderStyle (Slider::TwoValueVertical);
    slider8->setTextBoxStyle (Slider::TextBoxAbove, false, 80, 20);
    slider8->addListener (this);

    addAndMakeVisible (slider9 = new Slider ("new slider"));
    slider9->setRange (0, 10, 0);
    slider9->setSliderStyle (Slider::ThreeValueVertical);
    slider9->setTextBoxStyle (Slider::TextBoxAbove, false, 80, 20);
    slider9->addListener (this);

    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtTop));
    tabbedComponent->setTabBarDepth (30);
    tabbedComponent->addTab (TRANS("Tab 0"), Colours::lightgrey, 0, false);
    tabbedComponent->addTab (TRANS("Tab 1"), Colours::lightgrey, 0, false);
    tabbedComponent->addTab (TRANS("Tab 2"), Colours::lightgrey, 0, false);
    tabbedComponent->setCurrentTabIndex (0);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 600);


    //[Constructor] You can add your own custom stuff here..
	LookAndFeel::setDefaultLookAndFeel(&laf);
    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    textButton = nullptr;
    toggleButton = nullptr;
    labelReadOnly = nullptr;
    label = nullptr;
    comboBox = nullptr;
    textEditor = nullptr;
    hyperlinkButton = nullptr;
    slider1 = nullptr;
    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    slider6 = nullptr;
    slider7 = nullptr;
    slider8 = nullptr;
    slider9 = nullptr;
    tabbedComponent = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffdddddd));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent->setBounds (176, 8, 472, 128);
    textButton->setBounds (8, 8, 120, 32);
    toggleButton->setBounds (8, 56, 120, 32);
    labelReadOnly->setBounds (272, 208, 150, 32);
    label->setBounds (272, 256, 150, 32);
    comboBox->setBounds (272, 160, 376, 32);
    textEditor->setBounds (8, 160, 248, 128);
    hyperlinkButton->setBounds (8, 104, 150, 32);
    slider1->setBounds (8, 296, 184, 40);
    slider->setBounds (200, 304, 184, 32);
    slider2->setBounds (496, 224, 56, 56);
    slider3->setBounds (584, 240, 32, 24);
    slider4->setBounds (8, 344, 176, 48);
    slider5->setBounds (200, 360, 184, 32);
    slider6->setBounds (8, 400, 176, 48);
    slider7->setBounds (200, 416, 184, 32);
    slider8->setBounds (416, 296, 40, 152);
    slider9->setBounds (472, 296, 40, 152);
    tabbedComponent->setBounds (8, 464, 640, 86);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == label)
    {
        //[UserLabelCode_label] -- add your label text handling code here..
        //[/UserLabelCode_label]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void MainComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == comboBox)
    {
        //[UserComboBoxCode_comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider1)
    {
        //[UserSliderCode_slider1] -- add your slider handling code here..
        //[/UserSliderCode_slider1]
    }
    else if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4)
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5)
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..
        //[/UserSliderCode_slider5]
    }
    else if (sliderThatWasMoved == slider6)
    {
        //[UserSliderCode_slider6] -- add your slider handling code here..
        //[/UserSliderCode_slider6]
    }
    else if (sliderThatWasMoved == slider7)
    {
        //[UserSliderCode_slider7] -- add your slider handling code here..
        //[/UserSliderCode_slider7]
    }
    else if (sliderThatWasMoved == slider8)
    {
        //[UserSliderCode_slider8] -- add your slider handling code here..
        //[/UserSliderCode_slider8]
    }
    else if (sliderThatWasMoved == slider9)
    {
        //[UserSliderCode_slider9] -- add your slider handling code here..
        //[/UserSliderCode_slider9]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="800" initialHeight="600">
  <BACKGROUND backgroundColour="ffdddddd"/>
  <GROUPCOMPONENT name="new group" id="a8f476b8f0a708ad" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="176 8 472 128" title="Group"/>
  <TEXTBUTTON name="new button" id="b4c3c1ac654a1686" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="8 8 120 32" buttonText="TextButton"
              connectedEdges="5" needsCallback="0" radioGroupId="0"/>
  <TOGGLEBUTTON name="new toggle button" id="8b2ff806f9b931a7" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="8 56 120 32" buttonText="Toggle Button"
                connectedEdges="5" needsCallback="0" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="fa6135072e165c0c" memberName="labelReadOnly"
         virtualName="" explicitFocusOrder="0" pos="272 208 150 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Label (read only)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bdc5a0a6607b4b12" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="272 256 150 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Label (editable)" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="1616d995714d0ff5" memberName="comboBox"
            virtualName="" explicitFocusOrder="0" pos="272 160 376 32" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTEDITOR name="new text editor" id="5a4e90b576068fa8" memberName="textEditor"
              virtualName="" explicitFocusOrder="0" pos="8 160 248 128" initialText="Text Editor"
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <HYPERLINKBUTTON name="new hyperlink" id="21b89224fc22c961" memberName="hyperlinkButton"
                   virtualName="" explicitFocusOrder="0" pos="8 104 150 32" tooltip="http://74labs.org"
                   buttonText="Hyperlink Button" connectedEdges="5" needsCallback="0"
                   radioGroupId="0" url="http://74labs.org"/>
  <SLIDER name="new slider" id="712cc14491dfe510" memberName="slider1"
          virtualName="" explicitFocusOrder="0" pos="8 296 184 40" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxAbove"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="79643f0ab6b0bbc5" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="200 304 184 32" min="0" max="10"
          int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="b5cdc936071a3083" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="496 224 56 56" min="0"
          max="10" int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="6ceab3c774b9914c" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="584 240 32 24" min="0"
          max="10" int="0" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="b60ae7e0e2317137" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="8 344 176 48" min="0"
          max="10" int="0" style="IncDecButtons" textBoxPos="TextBoxAbove"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="a685d22c6b2a70f3" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="200 360 184 32" min="0"
          max="10" int="0" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="6eab4f21b108e7a1" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="8 400 176 48" min="0"
          max="10" int="0" style="TwoValueHorizontal" textBoxPos="TextBoxAbove"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="c9fb6d196319fd65" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="200 416 184 32" min="0"
          max="10" int="0" style="TwoValueHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="ca31a6d9517be2b" memberName="slider8" virtualName=""
          explicitFocusOrder="0" pos="416 296 40 152" min="0" max="10"
          int="0" style="TwoValueVertical" textBoxPos="TextBoxAbove" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="f566429479f85c66" memberName="slider9"
          virtualName="" explicitFocusOrder="0" pos="472 296 40 152" min="0"
          max="10" int="0" style="ThreeValueVertical" textBoxPos="TextBoxAbove"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <TABBEDCOMPONENT name="new tabbed component" id="540c4818aa5d3223" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="8 464 640 86" orientation="top"
                   tabBarDepth="30" initialTab="0">
    <TAB name="Tab 0" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Tab 1" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Tab 2" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
