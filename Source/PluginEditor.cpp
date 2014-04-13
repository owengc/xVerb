/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
XVerbAudioProcessorEditor::XVerbAudioProcessorEditor (XVerbAudioProcessor* ownerFilter)
    : AudioProcessorEditor(ownerFilter)
{
    addAndMakeVisible (DecayLabel = new Label ("Decay Label",
                                               "Decay"));
    DecayLabel->setFont (Font (Font::getDefaultMonospacedFontName(), 18.00f, Font::bold));
    DecayLabel->setJustificationType (Justification::centred);
    DecayLabel->setEditable (false, false, false);
    DecayLabel->setColour (Label::textColourId, Colours::azure);
    DecayLabel->setColour (TextEditor::textColourId, Colours::black);
    DecayLabel->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (DecayKnob = new Slider ("Decay Knob"));
    DecayKnob->setRange (0.01, 60, 0);
    DecayKnob->setSliderStyle (Slider::Rotary);
    DecayKnob->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    DecayKnob->setColour (Slider::backgroundColourId, Colours::cadetblue);
    DecayKnob->setColour (Slider::trackColourId, Colours::coral);
    DecayKnob->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    DecayKnob->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    DecayKnob->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    DecayKnob->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    DecayKnob->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    DecayKnob->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    DecayKnob->addListener (this);

    addAndMakeVisible (CombDelayLabel1 = new Label ("Comb Delay Label 1",
                                                    "Comb Delay 1"));
    CombDelayLabel1->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    CombDelayLabel1->setJustificationType (Justification::centred);
    CombDelayLabel1->setEditable (false, false, false);
    CombDelayLabel1->setColour (Label::textColourId, Colours::azure);
    CombDelayLabel1->setColour (TextEditor::textColourId, Colours::black);
    CombDelayLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (CombDelayKnob1 = new Slider ("Comb Delay Knob 1"));
    CombDelayKnob1->setRange (1, 100, 0);
    CombDelayKnob1->setSliderStyle (Slider::Rotary);
    CombDelayKnob1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    CombDelayKnob1->setColour (Slider::trackColourId, Colours::coral);
    CombDelayKnob1->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    CombDelayKnob1->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    CombDelayKnob1->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    CombDelayKnob1->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    CombDelayKnob1->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    CombDelayKnob1->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    CombDelayKnob1->addListener (this);

    addAndMakeVisible (CombDelayLabel2 = new Label ("Comb Delay Label 2",
                                                    "Comb Delay 2"));
    CombDelayLabel2->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    CombDelayLabel2->setJustificationType (Justification::centred);
    CombDelayLabel2->setEditable (false, false, false);
    CombDelayLabel2->setColour (Label::textColourId, Colours::azure);
    CombDelayLabel2->setColour (TextEditor::textColourId, Colours::black);
    CombDelayLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (CombDelayKnob2 = new Slider ("Comb Delay Knob 2"));
    CombDelayKnob2->setRange (1, 100, 0);
    CombDelayKnob2->setSliderStyle (Slider::Rotary);
    CombDelayKnob2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    CombDelayKnob2->setColour (Slider::trackColourId, Colours::coral);
    CombDelayKnob2->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    CombDelayKnob2->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    CombDelayKnob2->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    CombDelayKnob2->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    CombDelayKnob2->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    CombDelayKnob2->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    CombDelayKnob2->addListener (this);

    addAndMakeVisible (CombDelayLabel3 = new Label ("Comb Delay Label 3",
                                                    "Comb Delay 3"));
    CombDelayLabel3->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    CombDelayLabel3->setJustificationType (Justification::centred);
    CombDelayLabel3->setEditable (false, false, false);
    CombDelayLabel3->setColour (Label::textColourId, Colours::azure);
    CombDelayLabel3->setColour (TextEditor::textColourId, Colours::black);
    CombDelayLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (CombDelayKnob3 = new Slider ("Comb Delay Knob 3"));
    CombDelayKnob3->setRange (1, 100, 0);
    CombDelayKnob3->setSliderStyle (Slider::Rotary);
    CombDelayKnob3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    CombDelayKnob3->setColour (Slider::trackColourId, Colours::coral);
    CombDelayKnob3->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    CombDelayKnob3->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    CombDelayKnob3->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    CombDelayKnob3->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    CombDelayKnob3->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    CombDelayKnob3->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    CombDelayKnob3->addListener (this);

    addAndMakeVisible (CombDelayLabel4 = new Label ("Comb Delay Label 4",
                                                    "Comb Delay 4"));
    CombDelayLabel4->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    CombDelayLabel4->setJustificationType (Justification::centred);
    CombDelayLabel4->setEditable (false, false, false);
    CombDelayLabel4->setColour (Label::textColourId, Colours::azure);
    CombDelayLabel4->setColour (TextEditor::textColourId, Colours::black);
    CombDelayLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (CombDelayKnob4 = new Slider ("Comb Delay Knob 4"));
    CombDelayKnob4->setRange (1, 100, 0);
    CombDelayKnob4->setSliderStyle (Slider::Rotary);
    CombDelayKnob4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    CombDelayKnob4->setColour (Slider::trackColourId, Colours::coral);
    CombDelayKnob4->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    CombDelayKnob4->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    CombDelayKnob4->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    CombDelayKnob4->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    CombDelayKnob4->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    CombDelayKnob4->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    CombDelayKnob4->addListener (this);

    addAndMakeVisible (AllpassDelayLabel1 = new Label ("Allpass Delay Label 1",
                                                       "Allpass Delay 1"));
    AllpassDelayLabel1->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    AllpassDelayLabel1->setJustificationType (Justification::centred);
    AllpassDelayLabel1->setEditable (false, false, false);
    AllpassDelayLabel1->setColour (Label::textColourId, Colours::azure);
    AllpassDelayLabel1->setColour (TextEditor::textColourId, Colours::black);
    AllpassDelayLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (AllpassDelayKnob1 = new Slider ("Allpass Delay Knob 1"));
    AllpassDelayKnob1->setRange (1, 20, 0);
    AllpassDelayKnob1->setSliderStyle (Slider::Rotary);
    AllpassDelayKnob1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    AllpassDelayKnob1->setColour (Slider::trackColourId, Colours::coral);
    AllpassDelayKnob1->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    AllpassDelayKnob1->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    AllpassDelayKnob1->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    AllpassDelayKnob1->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    AllpassDelayKnob1->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    AllpassDelayKnob1->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    AllpassDelayKnob1->addListener (this);

    addAndMakeVisible (AllpassGainLabel1 = new Label ("Allpass Gain Label 1",
                                                      "Allpass Gain 1"));
    AllpassGainLabel1->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    AllpassGainLabel1->setJustificationType (Justification::centred);
    AllpassGainLabel1->setEditable (false, false, false);
    AllpassGainLabel1->setColour (Label::textColourId, Colours::azure);
    AllpassGainLabel1->setColour (TextEditor::textColourId, Colours::black);
    AllpassGainLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (AllpassGainKnob1 = new Slider ("Allpass Gain Knob 1"));
    AllpassGainKnob1->setRange (0, 1, 0);
    AllpassGainKnob1->setSliderStyle (Slider::Rotary);
    AllpassGainKnob1->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    AllpassGainKnob1->setColour (Slider::trackColourId, Colours::coral);
    AllpassGainKnob1->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    AllpassGainKnob1->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    AllpassGainKnob1->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    AllpassGainKnob1->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    AllpassGainKnob1->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    AllpassGainKnob1->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    AllpassGainKnob1->addListener (this);

    addAndMakeVisible (MixLabel = new Label ("Mix Label",
                                             "Mix"));
    MixLabel->setFont (Font (Font::getDefaultMonospacedFontName(), 18.00f, Font::bold));
    MixLabel->setJustificationType (Justification::centred);
    MixLabel->setEditable (false, false, false);
    MixLabel->setColour (Label::textColourId, Colours::azure);
    MixLabel->setColour (TextEditor::textColourId, Colours::black);
    MixLabel->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (MixKnob = new Slider ("Mix Knob"));
    MixKnob->setRange (0, 1, 0);
    MixKnob->setSliderStyle (Slider::Rotary);
    MixKnob->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    MixKnob->setColour (Slider::backgroundColourId, Colours::cadetblue);
    MixKnob->setColour (Slider::trackColourId, Colours::coral);
    MixKnob->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    MixKnob->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    MixKnob->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    MixKnob->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    MixKnob->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    MixKnob->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    MixKnob->addListener (this);

    addAndMakeVisible (AllpassDelayLabel2 = new Label ("Allpass Delay Label 1",
                                                       "Allpass Delay 2"));
    AllpassDelayLabel2->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    AllpassDelayLabel2->setJustificationType (Justification::centred);
    AllpassDelayLabel2->setEditable (false, false, false);
    AllpassDelayLabel2->setColour (Label::textColourId, Colours::azure);
    AllpassDelayLabel2->setColour (TextEditor::textColourId, Colours::black);
    AllpassDelayLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (AllpassDelayKnob2 = new Slider ("Allpass Delay Knob 2"));
    AllpassDelayKnob2->setRange (1, 20, 0);
    AllpassDelayKnob2->setSliderStyle (Slider::Rotary);
    AllpassDelayKnob2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    AllpassDelayKnob2->setColour (Slider::trackColourId, Colours::coral);
    AllpassDelayKnob2->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    AllpassDelayKnob2->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    AllpassDelayKnob2->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    AllpassDelayKnob2->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    AllpassDelayKnob2->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    AllpassDelayKnob2->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    AllpassDelayKnob2->addListener (this);

    addAndMakeVisible (AllpassGainLabel3 = new Label ("Allpass Gain Label 2",
                                                      "Allpass Gain 2"));
    AllpassGainLabel3->setFont (Font (Font::getDefaultMonospacedFontName(), 16.00f, Font::bold));
    AllpassGainLabel3->setJustificationType (Justification::centred);
    AllpassGainLabel3->setEditable (false, false, false);
    AllpassGainLabel3->setColour (Label::textColourId, Colours::azure);
    AllpassGainLabel3->setColour (TextEditor::textColourId, Colours::black);
    AllpassGainLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (AllpassGainKnob2 = new Slider ("Allpass Gain Knob 2"));
    AllpassGainKnob2->setRange (0, 1, 0);
    AllpassGainKnob2->setSliderStyle (Slider::Rotary);
    AllpassGainKnob2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    AllpassGainKnob2->setColour (Slider::trackColourId, Colours::coral);
    AllpassGainKnob2->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    AllpassGainKnob2->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    AllpassGainKnob2->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    AllpassGainKnob2->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    AllpassGainKnob2->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    AllpassGainKnob2->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    AllpassGainKnob2->addListener (this);

    addAndMakeVisible (BypassButton = new TextButton ("Bypass Button"));
    BypassButton->setButtonText ("Bypass");
    BypassButton->addListener (this);
    BypassButton->setColour (TextButton::buttonColourId, Colours::cadetblue);
    BypassButton->setColour (TextButton::buttonOnColourId, Colours::coral);
    BypassButton->setColour (TextButton::textColourOnId, Colours::azure);
    BypassButton->setColour (TextButton::textColourOffId, Colours::azure);

    addAndMakeVisible (LowpassCutoffLabel = new Label ("Lowpass Cutoff",
                                                       "Lowpass Cutoff"));
    LowpassCutoffLabel->setFont (Font (Font::getDefaultMonospacedFontName(), 18.00f, Font::bold));
    LowpassCutoffLabel->setJustificationType (Justification::centred);
    LowpassCutoffLabel->setEditable (false, false, false);
    LowpassCutoffLabel->setColour (Label::textColourId, Colours::azure);
    LowpassCutoffLabel->setColour (TextEditor::textColourId, Colours::black);
    LowpassCutoffLabel->setColour (TextEditor::backgroundColourId, Colour (0x00ffffff));

    addAndMakeVisible (LowpassCutoffKnob = new Slider ("LowpassCutoff Knob"));
    LowpassCutoffKnob->setRange (20, 10000, 0);
    LowpassCutoffKnob->setSliderStyle (Slider::Rotary);
    LowpassCutoffKnob->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    LowpassCutoffKnob->setColour (Slider::backgroundColourId, Colours::cadetblue);
    LowpassCutoffKnob->setColour (Slider::trackColourId, Colours::coral);
    LowpassCutoffKnob->setColour (Slider::rotarySliderFillColourId, Colours::aquamarine);
    LowpassCutoffKnob->setColour (Slider::rotarySliderOutlineColourId, Colours::cadetblue);
    LowpassCutoffKnob->setColour (Slider::textBoxTextColourId, Colours::aliceblue);
    LowpassCutoffKnob->setColour (Slider::textBoxBackgroundColourId, Colours::cadetblue);
    LowpassCutoffKnob->setColour (Slider::textBoxHighlightColourId, Colours::coral);
    LowpassCutoffKnob->setColour (Slider::textBoxOutlineColourId, Colours::cadetblue);
    LowpassCutoffKnob->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (864, 296);


    //[Constructor] You can add your own custom stuff here..
    startTimer(200);
    BypassButton->setClickingTogglesState(true);
    //[/Constructor]
}

XVerbAudioProcessorEditor::~XVerbAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    DecayLabel = nullptr;
    DecayKnob = nullptr;
    CombDelayLabel1 = nullptr;
    CombDelayKnob1 = nullptr;
    CombDelayLabel2 = nullptr;
    CombDelayKnob2 = nullptr;
    CombDelayLabel3 = nullptr;
    CombDelayKnob3 = nullptr;
    CombDelayLabel4 = nullptr;
    CombDelayKnob4 = nullptr;
    AllpassDelayLabel1 = nullptr;
    AllpassDelayKnob1 = nullptr;
    AllpassGainLabel1 = nullptr;
    AllpassGainKnob1 = nullptr;
    MixLabel = nullptr;
    MixKnob = nullptr;
    AllpassDelayLabel2 = nullptr;
    AllpassDelayKnob2 = nullptr;
    AllpassGainLabel3 = nullptr;
    AllpassGainKnob2 = nullptr;
    BypassButton = nullptr;
    LowpassCutoffLabel = nullptr;
    LowpassCutoffKnob = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void XVerbAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colours::azure);
    g.fillPath (internalPath1);

    g.setColour (Colours::azure);
    g.fillPath (internalPath2);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void XVerbAudioProcessorEditor::resized()
{
    DecayLabel->setBounds (proportionOfWidth (0.3333f), proportionOfHeight (0.3514f), proportionOfWidth (0.1019f), proportionOfHeight (0.0811f));
    DecayKnob->setBounds (proportionOfWidth (0.3241f), proportionOfHeight (0.4595f), proportionOfWidth (0.1204f), proportionOfHeight (0.3311f));
    CombDelayLabel1->setBounds (proportionOfWidth (0.0000f), proportionOfHeight (0.0270f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    CombDelayKnob1->setBounds (proportionOfWidth (0.0093f), proportionOfHeight (0.1351f), proportionOfWidth (0.1389f), proportionOfHeight (0.3243f));
    CombDelayLabel2->setBounds (proportionOfWidth (0.1574f), proportionOfHeight (0.0270f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    CombDelayKnob2->setBounds (proportionOfWidth (0.1667f), proportionOfHeight (0.1351f), proportionOfWidth (0.1389f), proportionOfHeight (0.3243f));
    CombDelayLabel3->setBounds (proportionOfWidth (0.0000f), proportionOfHeight (0.5135f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    CombDelayKnob3->setBounds (proportionOfWidth (0.0093f), proportionOfHeight (0.6216f), proportionOfWidth (0.1389f), proportionOfHeight (0.3243f));
    CombDelayLabel4->setBounds (proportionOfWidth (0.1482f), proportionOfHeight (0.5135f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    CombDelayKnob4->setBounds (144, 184, 120, 96);
    AllpassDelayLabel1->setBounds (proportionOfWidth (0.6759f), proportionOfHeight (0.0270f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    AllpassDelayKnob1->setBounds (proportionOfWidth (0.6852f), proportionOfHeight (0.1351f), proportionOfWidth (0.1482f), proportionOfHeight (0.3243f));
    AllpassGainLabel1->setBounds (proportionOfWidth (0.8333f), proportionOfHeight (0.0270f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    AllpassGainKnob1->setBounds (proportionOfWidth (0.8426f), proportionOfHeight (0.1351f), proportionOfWidth (0.1482f), proportionOfHeight (0.3243f));
    MixLabel->setBounds (proportionOfWidth (0.4537f), proportionOfHeight (0.3514f), proportionOfWidth (0.1019f), proportionOfHeight (0.0811f));
    MixKnob->setBounds (proportionOfWidth (0.4444f), proportionOfHeight (0.4595f), proportionOfWidth (0.1204f), proportionOfHeight (0.3311f));
    AllpassDelayLabel2->setBounds (proportionOfWidth (0.6759f), proportionOfHeight (0.5135f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    AllpassDelayKnob2->setBounds (proportionOfWidth (0.6852f), proportionOfHeight (0.6216f), proportionOfWidth (0.1482f), proportionOfHeight (0.3243f));
    AllpassGainLabel3->setBounds (proportionOfWidth (0.8333f), proportionOfHeight (0.5135f), proportionOfWidth (0.1667f), proportionOfHeight (0.1216f));
    AllpassGainKnob2->setBounds (proportionOfWidth (0.8426f), proportionOfHeight (0.6216f), proportionOfWidth (0.1482f), proportionOfHeight (0.3243f));
    BypassButton->setBounds (proportionOfWidth (0.4167f), proportionOfHeight (0.8649f), proportionOfWidth (0.1736f), proportionOfHeight (0.0811f));
    LowpassCutoffLabel->setBounds (proportionOfWidth (0.5741f), proportionOfHeight (0.2973f), proportionOfWidth (0.1111f), proportionOfHeight (0.1655f));
    LowpassCutoffKnob->setBounds (proportionOfWidth (0.5683f), proportionOfHeight (0.4595f), proportionOfWidth (0.1204f), proportionOfHeight (0.3311f));
    internalPath1.clear();
    internalPath1.startNewSubPath (333.0f, 71.0f);
    internalPath1.quadraticTo (328.0f, 77.0f, 324.0f, 77.0f);
    internalPath1.quadraticTo (323.0f, 77.0f, 323.0f, 77.0f);
    internalPath1.quadraticTo (323.0f, 77.0f, 322.0f, 77.0f);
    internalPath1.quadraticTo (321.0f, 76.0f, 320.0f, 76.0f);
    internalPath1.quadraticTo (320.0f, 76.0f, 319.0f, 77.0f);
    internalPath1.lineTo (311.0f, 77.0f);
    internalPath1.quadraticTo (311.0f, 73.0f, 311.0f, 69.0f);
    internalPath1.quadraticTo (311.0f, 64.0f, 308.0f, 62.0f);
    internalPath1.quadraticTo (308.0f, 57.0f, 308.0f, 51.0f);
    internalPath1.quadraticTo (308.0f, 47.0f, 308.0f, 41.0f);
    internalPath1.quadraticTo (308.0f, 33.0f, 308.0f, 30.0f);
    internalPath1.quadraticTo (312.0f, 29.0f, 324.0f, 30.0f);
    internalPath1.quadraticTo (327.0f, 30.0f, 330.0f, 34.0f);
    internalPath1.quadraticTo (332.0f, 37.0f, 332.0f, 40.0f);
    internalPath1.quadraticTo (332.0f, 44.0f, 330.0f, 47.0f);
    internalPath1.quadraticTo (328.0f, 51.0f, 325.0f, 53.0f);
    internalPath1.quadraticTo (325.0f, 53.0f, 324.0f, 52.0f);
    internalPath1.quadraticTo (324.0f, 53.0f, 324.0f, 53.0f);
    internalPath1.quadraticTo (324.0f, 54.0f, 326.0f, 54.0f);
    internalPath1.quadraticTo (328.0f, 54.0f, 328.0f, 56.0f);
    internalPath1.quadraticTo (329.0f, 55.0f, 330.0f, 54.0f);
    internalPath1.quadraticTo (331.0f, 53.0f, 332.0f, 53.0f);
    internalPath1.quadraticTo (335.0f, 57.0f, 335.0f, 62.0f);
    internalPath1.quadraticTo (335.0f, 67.0f, 333.0f, 71.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (324.0f, 41.0f);
    internalPath1.lineTo (324.0f, 41.0f);
    internalPath1.lineTo (323.0f, 42.0f);
    internalPath1.quadraticTo (323.0f, 42.0f, 323.0f, 41.0f);
    internalPath1.quadraticTo (322.0f, 40.0f, 322.0f, 40.0f);
    internalPath1.quadraticTo (321.0f, 38.0f, 320.0f, 37.0f);
    internalPath1.quadraticTo (319.0f, 35.0f, 317.0f, 36.0f);
    internalPath1.quadraticTo (318.0f, 40.0f, 317.0f, 50.0f);
    internalPath1.lineTo (318.0f, 49.0f);
    internalPath1.quadraticTo (319.0f, 49.0f, 319.0f, 49.0f);
    internalPath1.quadraticTo (320.0f, 49.0f, 320.0f, 48.0f);
    internalPath1.quadraticTo (321.0f, 46.0f, 322.0f, 46.0f);
    internalPath1.quadraticTo (322.0f, 46.0f, 323.0f, 47.0f);
    internalPath1.quadraticTo (323.0f, 46.0f, 324.0f, 45.0f);
    internalPath1.quadraticTo (325.0f, 44.0f, 325.0f, 43.0f);
    internalPath1.quadraticTo (325.0f, 42.0f, 324.0f, 41.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (326.0f, 60.0f);
    internalPath1.lineTo (326.0f, 60.0f);
    internalPath1.quadraticTo (326.0f, 59.0f, 324.0f, 58.0f);
    internalPath1.quadraticTo (323.0f, 56.0f, 323.0f, 55.0f);
    internalPath1.quadraticTo (323.0f, 56.0f, 321.0f, 56.0f);
    internalPath1.quadraticTo (320.0f, 56.0f, 320.0f, 56.0f);
    internalPath1.lineTo (320.0f, 57.0f);
    internalPath1.quadraticTo (320.0f, 57.0f, 318.0f, 58.0f);
    internalPath1.quadraticTo (318.0f, 57.0f, 318.0f, 57.0f);
    internalPath1.quadraticTo (317.0f, 58.0f, 317.0f, 59.0f);
    internalPath1.quadraticTo (317.0f, 60.0f, 317.0f, 65.0f);
    internalPath1.quadraticTo (317.0f, 68.0f, 318.0f, 71.0f);
    internalPath1.quadraticTo (319.0f, 69.0f, 320.0f, 69.0f);
    internalPath1.quadraticTo (321.0f, 69.0f, 322.0f, 69.0f);
    internalPath1.quadraticTo (322.0f, 69.0f, 323.0f, 69.0f);
    internalPath1.quadraticTo (325.0f, 68.0f, 325.0f, 65.0f);
    internalPath1.quadraticTo (326.0f, 60.0f, 326.0f, 60.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (362.0f, 70.0f);
    internalPath1.lineTo (362.0f, 70.0f);
    internalPath1.quadraticTo (361.0f, 71.0f, 361.0f, 73.0f);
    internalPath1.quadraticTo (361.0f, 76.0f, 361.0f, 76.0f);
    internalPath1.quadraticTo (361.0f, 76.0f, 361.0f, 76.0f);
    internalPath1.quadraticTo (360.0f, 76.0f, 360.0f, 77.0f);
    internalPath1.quadraticTo (360.0f, 77.0f, 360.0f, 77.0f);
    internalPath1.quadraticTo (360.0f, 78.0f, 360.0f, 78.0f);
    internalPath1.quadraticTo (360.0f, 79.0f, 359.0f, 79.0f);
    internalPath1.quadraticTo (358.0f, 78.0f, 356.0f, 78.0f);
    internalPath1.quadraticTo (355.0f, 78.0f, 353.0f, 77.0f);
    internalPath1.quadraticTo (353.0f, 67.0f, 352.0f, 57.0f);
    internalPath1.quadraticTo (352.0f, 57.0f, 352.0f, 55.0f);
    internalPath1.quadraticTo (352.0f, 54.0f, 351.0f, 53.0f);
    internalPath1.lineTo (351.0f, 54.0f);
    internalPath1.quadraticTo (351.0f, 54.0f, 351.0f, 53.0f);
    internalPath1.quadraticTo (352.0f, 53.0f, 352.0f, 52.0f);
    internalPath1.quadraticTo (352.0f, 52.0f, 352.0f, 52.0f);
    internalPath1.lineTo (351.0f, 51.0f);
    internalPath1.quadraticTo (350.0f, 52.0f, 350.0f, 54.0f);
    internalPath1.quadraticTo (350.0f, 56.0f, 349.0f, 56.0f);
    internalPath1.quadraticTo (349.0f, 56.0f, 349.0f, 57.0f);
    internalPath1.quadraticTo (349.0f, 57.0f, 349.0f, 58.0f);
    internalPath1.quadraticTo (349.0f, 58.0f, 349.0f, 59.0f);
    internalPath1.quadraticTo (349.0f, 59.0f, 349.0f, 60.0f);
    internalPath1.quadraticTo (349.0f, 60.0f, 349.0f, 68.0f);
    internalPath1.quadraticTo (349.0f, 73.0f, 349.0f, 76.0f);
    internalPath1.lineTo (349.0f, 77.0f);
    internalPath1.quadraticTo (348.0f, 77.0f, 348.0f, 77.0f);
    internalPath1.quadraticTo (347.0f, 77.0f, 345.0f, 77.0f);
    internalPath1.quadraticTo (344.0f, 77.0f, 343.0f, 77.0f);
    internalPath1.quadraticTo (341.0f, 77.0f, 340.0f, 76.0f);
    internalPath1.lineTo (340.0f, 48.0f);
    internalPath1.quadraticTo (340.0f, 46.0f, 340.0f, 42.0f);
    internalPath1.lineTo (340.0f, 37.0f);
    internalPath1.quadraticTo (340.0f, 33.0f, 339.0f, 31.0f);
    internalPath1.quadraticTo (339.0f, 29.0f, 341.0f, 29.0f);
    internalPath1.quadraticTo (342.0f, 29.0f, 344.0f, 30.0f);
    internalPath1.quadraticTo (345.0f, 30.0f, 347.0f, 30.0f);
    internalPath1.quadraticTo (347.0f, 30.0f, 348.0f, 30.0f);
    internalPath1.quadraticTo (349.0f, 30.0f, 350.0f, 30.0f);
    internalPath1.quadraticTo (353.0f, 30.0f, 354.0f, 28.0f);
    internalPath1.quadraticTo (355.0f, 28.0f, 356.0f, 29.0f);
    internalPath1.quadraticTo (358.0f, 30.0f, 359.0f, 30.0f);
    internalPath1.quadraticTo (362.0f, 33.0f, 362.0f, 38.0f);
    internalPath1.quadraticTo (362.0f, 39.0f, 361.0f, 48.0f);
    internalPath1.lineTo (357.0f, 51.0f);
    internalPath1.quadraticTo (358.0f, 54.0f, 359.0f, 61.0f);
    internalPath1.quadraticTo (360.0f, 67.0f, 362.0f, 70.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (357.0f, 37.0f);
    internalPath1.lineTo (357.0f, 38.0f);
    internalPath1.quadraticTo (357.0f, 38.0f, 357.0f, 34.0f);
    internalPath1.quadraticTo (357.0f, 32.0f, 356.0f, 31.0f);
    internalPath1.quadraticTo (355.0f, 32.0f, 355.0f, 34.0f);
    internalPath1.quadraticTo (354.0f, 37.0f, 354.0f, 38.0f);
    internalPath1.quadraticTo (352.0f, 38.0f, 351.0f, 36.0f);
    internalPath1.quadraticTo (351.0f, 32.0f, 351.0f, 32.0f);
    internalPath1.lineTo (351.0f, 33.0f);
    internalPath1.quadraticTo (350.0f, 33.0f, 350.0f, 33.0f);
    internalPath1.quadraticTo (350.0f, 34.0f, 349.0f, 34.0f);
    internalPath1.quadraticTo (349.0f, 34.0f, 349.0f, 35.0f);
    internalPath1.quadraticTo (348.0f, 36.0f, 348.0f, 36.0f);
    internalPath1.quadraticTo (348.0f, 37.0f, 349.0f, 37.0f);
    internalPath1.quadraticTo (349.0f, 39.0f, 349.0f, 41.0f);
    internalPath1.quadraticTo (349.0f, 41.0f, 349.0f, 45.0f);
    internalPath1.quadraticTo (349.0f, 47.0f, 349.0f, 49.0f);
    internalPath1.quadraticTo (350.0f, 49.0f, 351.0f, 49.0f);
    internalPath1.quadraticTo (353.0f, 49.0f, 354.0f, 47.0f);
    internalPath1.quadraticTo (354.0f, 46.0f, 355.0f, 42.0f);
    internalPath1.quadraticTo (355.0f, 39.0f, 357.0f, 37.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (393.0f, 59.0f);
    internalPath1.lineTo (393.0f, 59.0f);
    internalPath1.quadraticTo (393.0f, 60.0f, 392.0f, 66.0f);
    internalPath1.quadraticTo (392.0f, 70.0f, 391.0f, 72.0f);
    internalPath1.quadraticTo (391.0f, 72.0f, 390.0f, 72.0f);
    internalPath1.quadraticTo (389.0f, 72.0f, 389.0f, 71.0f);
    internalPath1.quadraticTo (388.0f, 70.0f, 388.0f, 70.0f);
    internalPath1.quadraticTo (388.0f, 70.0f, 387.0f, 71.0f);
    internalPath1.quadraticTo (385.0f, 70.0f, 384.0f, 69.0f);
    internalPath1.quadraticTo (383.0f, 69.0f, 383.0f, 67.0f);
    internalPath1.lineTo (384.0f, 67.0f);
    internalPath1.quadraticTo (383.0f, 63.0f, 382.0f, 50.0f);
    internalPath1.quadraticTo (382.0f, 40.0f, 380.0f, 34.0f);
    internalPath1.quadraticTo (379.0f, 35.0f, 379.0f, 35.0f);
    internalPath1.quadraticTo (379.0f, 36.0f, 379.0f, 36.0f);
    internalPath1.lineTo (378.0f, 34.0f);
    internalPath1.quadraticTo (377.0f, 34.0f, 377.0f, 35.0f);
    internalPath1.quadraticTo (378.0f, 37.0f, 377.0f, 37.0f);
    internalPath1.quadraticTo (376.0f, 37.0f, 376.0f, 38.0f);
    internalPath1.quadraticTo (376.0f, 38.0f, 375.0f, 39.0f);
    internalPath1.lineTo (377.0f, 63.0f);
    internalPath1.lineTo (376.0f, 64.0f);
    internalPath1.lineTo (375.0f, 64.0f);
    internalPath1.quadraticTo (375.0f, 64.0f, 372.0f, 66.0f);
    internalPath1.quadraticTo (370.0f, 68.0f, 368.0f, 68.0f);
    internalPath1.quadraticTo (367.0f, 63.0f, 367.0f, 58.0f);
    internalPath1.quadraticTo (366.0f, 52.0f, 366.0f, 48.0f);
    internalPath1.quadraticTo (366.0f, 36.0f, 372.0f, 31.0f);
    internalPath1.quadraticTo (373.0f, 31.0f, 375.0f, 30.0f);
    internalPath1.quadraticTo (377.0f, 29.0f, 378.0f, 29.0f);
    internalPath1.quadraticTo (379.0f, 29.0f, 380.0f, 30.0f);
    internalPath1.quadraticTo (380.0f, 29.0f, 381.0f, 29.0f);
    internalPath1.quadraticTo (382.0f, 29.0f, 382.0f, 29.0f);
    internalPath1.quadraticTo (383.0f, 30.0f, 384.0f, 30.0f);
    internalPath1.quadraticTo (388.0f, 33.0f, 390.0f, 38.0f);
    internalPath1.quadraticTo (392.0f, 42.0f, 392.0f, 48.0f);
    internalPath1.quadraticTo (392.0f, 54.0f, 392.0f, 59.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (390.0f, 77.0f);
    internalPath1.quadraticTo (389.0f, 77.0f, 388.0f, 76.0f);
    internalPath1.quadraticTo (386.0f, 76.0f, 386.0f, 76.0f);
    internalPath1.quadraticTo (385.0f, 76.0f, 384.0f, 77.0f);
    internalPath1.lineTo (383.0f, 79.0f);
    internalPath1.quadraticTo (383.0f, 78.0f, 382.0f, 78.0f);
    internalPath1.quadraticTo (380.0f, 78.0f, 380.0f, 78.0f);
    internalPath1.quadraticTo (380.0f, 78.0f, 379.0f, 78.0f);
    internalPath1.quadraticTo (379.0f, 78.0f, 378.0f, 78.0f);
    internalPath1.quadraticTo (378.0f, 78.0f, 378.0f, 78.0f);
    internalPath1.quadraticTo (377.0f, 78.0f, 376.0f, 78.0f);
    internalPath1.quadraticTo (375.0f, 78.0f, 375.0f, 78.0f);
    internalPath1.lineTo (375.0f, 78.0f);
    internalPath1.quadraticTo (374.0f, 78.0f, 374.0f, 78.0f);
    internalPath1.quadraticTo (373.0f, 78.0f, 373.0f, 77.0f);
    internalPath1.quadraticTo (376.0f, 76.0f, 376.0f, 74.0f);
    internalPath1.quadraticTo (376.0f, 73.0f, 374.0f, 73.0f);
    internalPath1.quadraticTo (373.0f, 73.0f, 372.0f, 72.0f);
    internalPath1.quadraticTo (372.0f, 73.0f, 371.0f, 73.0f);
    internalPath1.quadraticTo (370.0f, 73.0f, 370.0f, 73.0f);
    internalPath1.quadraticTo (369.0f, 73.0f, 368.0f, 72.0f);
    internalPath1.quadraticTo (368.0f, 71.0f, 368.0f, 71.0f);
    internalPath1.quadraticTo (368.0f, 70.0f, 369.0f, 70.0f);
    internalPath1.quadraticTo (371.0f, 70.0f, 371.0f, 69.0f);
    internalPath1.quadraticTo (372.0f, 68.0f, 374.0f, 67.0f);
    internalPath1.quadraticTo (375.0f, 66.0f, 377.0f, 66.0f);
    internalPath1.quadraticTo (378.0f, 67.0f, 378.0f, 69.0f);
    internalPath1.quadraticTo (378.0f, 71.0f, 379.0f, 72.0f);
    internalPath1.quadraticTo (379.0f, 74.0f, 381.0f, 74.0f);
    internalPath1.lineTo (382.0f, 72.0f);
    internalPath1.quadraticTo (382.0f, 71.0f, 383.0f, 71.0f);
    internalPath1.quadraticTo (384.0f, 71.0f, 385.0f, 72.0f);
    internalPath1.quadraticTo (386.0f, 73.0f, 387.0f, 73.0f);
    internalPath1.quadraticTo (387.0f, 73.0f, 388.0f, 72.0f);
    internalPath1.quadraticTo (388.0f, 73.0f, 389.0f, 75.0f);
    internalPath1.quadraticTo (389.0f, 76.0f, 390.0f, 77.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (421.0f, 77.0f);
    internalPath1.lineTo (421.0f, 77.0f);
    internalPath1.quadraticTo (420.0f, 77.0f, 420.0f, 76.0f);
    internalPath1.lineTo (420.0f, 77.0f);
    internalPath1.lineTo (419.0f, 76.0f);
    internalPath1.quadraticTo (419.0f, 76.0f, 417.0f, 76.0f);
    internalPath1.quadraticTo (416.0f, 76.0f, 415.0f, 77.0f);
    internalPath1.quadraticTo (413.0f, 75.0f, 412.0f, 70.0f);
    internalPath1.quadraticTo (412.0f, 64.0f, 411.0f, 63.0f);
    internalPath1.quadraticTo (409.0f, 58.0f, 410.0f, 52.0f);
    internalPath1.lineTo (409.0f, 51.0f);
    internalPath1.quadraticTo (409.0f, 52.0f, 408.0f, 53.0f);
    internalPath1.quadraticTo (407.0f, 54.0f, 406.0f, 54.0f);
    internalPath1.quadraticTo (406.0f, 54.0f, 406.0f, 54.0f);
    internalPath1.quadraticTo (405.0f, 54.0f, 404.0f, 54.0f);
    internalPath1.quadraticTo (404.0f, 53.0f, 403.0f, 53.0f);
    internalPath1.quadraticTo (403.0f, 54.0f, 402.0f, 54.0f);
    internalPath1.quadraticTo (401.0f, 53.0f, 401.0f, 54.0f);
    internalPath1.quadraticTo (401.0f, 55.0f, 404.0f, 55.0f);
    internalPath1.quadraticTo (408.0f, 55.0f, 408.0f, 57.0f);
    internalPath1.quadraticTo (408.0f, 57.0f, 406.0f, 59.0f);
    internalPath1.quadraticTo (405.0f, 61.0f, 405.0f, 65.0f);
    internalPath1.quadraticTo (406.0f, 70.0f, 405.0f, 72.0f);
    internalPath1.quadraticTo (405.0f, 72.0f, 405.0f, 73.0f);
    internalPath1.quadraticTo (405.0f, 73.0f, 405.0f, 74.0f);
    internalPath1.quadraticTo (406.0f, 75.0f, 406.0f, 76.0f);
    internalPath1.quadraticTo (406.0f, 76.0f, 405.0f, 77.0f);
    internalPath1.quadraticTo (404.0f, 76.0f, 401.0f, 76.0f);
    internalPath1.quadraticTo (398.0f, 77.0f, 397.0f, 76.0f);
    internalPath1.quadraticTo (396.0f, 75.0f, 396.0f, 73.0f);
    internalPath1.quadraticTo (396.0f, 72.0f, 396.0f, 70.0f);
    internalPath1.quadraticTo (397.0f, 68.0f, 397.0f, 67.0f);
    internalPath1.quadraticTo (397.0f, 66.0f, 396.0f, 65.0f);
    internalPath1.quadraticTo (397.0f, 62.0f, 397.0f, 58.0f);
    internalPath1.quadraticTo (397.0f, 52.0f, 397.0f, 52.0f);
    internalPath1.quadraticTo (396.0f, 52.0f, 398.0f, 52.0f);
    internalPath1.quadraticTo (398.0f, 52.0f, 399.0f, 51.0f);
    internalPath1.quadraticTo (397.0f, 50.0f, 397.0f, 47.0f);
    internalPath1.quadraticTo (397.0f, 47.0f, 398.0f, 45.0f);
    internalPath1.quadraticTo (398.0f, 43.0f, 398.0f, 42.0f);
    internalPath1.quadraticTo (398.0f, 41.0f, 397.0f, 39.0f);
    internalPath1.quadraticTo (397.0f, 37.0f, 397.0f, 36.0f);
    internalPath1.quadraticTo (397.0f, 34.0f, 398.0f, 31.0f);
    internalPath1.quadraticTo (398.0f, 27.0f, 398.0f, 25.0f);
    internalPath1.lineTo (407.0f, 26.0f);
    internalPath1.quadraticTo (407.0f, 28.0f, 406.0f, 32.0f);
    internalPath1.quadraticTo (406.0f, 37.0f, 406.0f, 39.0f);
    internalPath1.quadraticTo (406.0f, 41.0f, 406.0f, 42.0f);
    internalPath1.quadraticTo (406.0f, 42.0f, 406.0f, 43.0f);
    internalPath1.quadraticTo (406.0f, 44.0f, 406.0f, 44.0f);
    internalPath1.quadraticTo (406.0f, 42.0f, 408.0f, 39.0f);
    internalPath1.quadraticTo (410.0f, 35.0f, 410.0f, 33.0f);
    internalPath1.quadraticTo (410.0f, 33.0f, 410.0f, 32.0f);
    internalPath1.quadraticTo (411.0f, 31.0f, 412.0f, 29.0f);
    internalPath1.quadraticTo (413.0f, 26.0f, 414.0f, 25.0f);
    internalPath1.lineTo (421.0f, 26.0f);
    internalPath1.lineTo (421.0f, 28.0f);
    internalPath1.lineTo (421.0f, 28.0f);
    internalPath1.quadraticTo (420.0f, 30.0f, 419.0f, 33.0f);
    internalPath1.quadraticTo (417.0f, 36.0f, 416.0f, 38.0f);
    internalPath1.quadraticTo (415.0f, 40.0f, 415.0f, 42.0f);
    internalPath1.quadraticTo (415.0f, 45.0f, 417.0f, 52.0f);
    internalPath1.quadraticTo (419.0f, 59.0f, 420.0f, 63.0f);
    internalPath1.quadraticTo (420.0f, 64.0f, 421.0f, 69.0f);
    internalPath1.quadraticTo (422.0f, 72.0f, 422.0f, 74.0f);
    internalPath1.quadraticTo (422.0f, 76.0f, 421.0f, 77.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (447.0f, 36.0f);
    internalPath1.quadraticTo (446.0f, 36.0f, 445.0f, 36.0f);
    internalPath1.quadraticTo (443.0f, 36.0f, 441.0f, 35.0f);
    internalPath1.quadraticTo (437.0f, 35.0f, 436.0f, 35.0f);
    internalPath1.quadraticTo (435.0f, 37.0f, 435.0f, 39.0f);
    internalPath1.quadraticTo (435.0f, 46.0f, 435.0f, 45.0f);
    internalPath1.quadraticTo (436.0f, 45.0f, 436.0f, 47.0f);
    internalPath1.quadraticTo (436.0f, 49.0f, 436.0f, 49.0f);
    internalPath1.quadraticTo (436.0f, 49.0f, 436.0f, 51.0f);
    internalPath1.quadraticTo (435.0f, 50.0f, 434.0f, 50.0f);
    internalPath1.quadraticTo (433.0f, 48.0f, 433.0f, 47.0f);
    internalPath1.lineTo (433.0f, 48.0f);
    internalPath1.lineTo (432.0f, 47.0f);
    internalPath1.quadraticTo (432.0f, 48.0f, 430.0f, 47.0f);
    internalPath1.quadraticTo (429.0f, 46.0f, 428.0f, 46.0f);
    internalPath1.quadraticTo (428.0f, 44.0f, 428.0f, 44.0f);
    internalPath1.lineTo (427.0f, 43.0f);
    internalPath1.lineTo (427.0f, 44.0f);
    internalPath1.quadraticTo (426.0f, 36.0f, 427.0f, 28.0f);
    internalPath1.quadraticTo (430.0f, 28.0f, 433.0f, 28.0f);
    internalPath1.quadraticTo (435.0f, 28.0f, 440.0f, 28.0f);
    internalPath1.quadraticTo (444.0f, 28.0f, 447.0f, 28.0f);
    internalPath1.quadraticTo (447.0f, 29.0f, 447.0f, 30.0f);
    internalPath1.quadraticTo (447.0f, 31.0f, 447.0f, 33.0f);
    internalPath1.quadraticTo (447.0f, 35.0f, 447.0f, 36.0f);
    internalPath1.closeSubPath();
    internalPath1.startNewSubPath (447.0f, 72.0f);
    internalPath1.lineTo (447.0f, 72.0f);
    internalPath1.quadraticTo (447.0f, 73.0f, 447.0f, 74.0f);
    internalPath1.quadraticTo (446.0f, 75.0f, 447.0f, 76.0f);
    internalPath1.quadraticTo (447.0f, 78.0f, 447.0f, 79.0f);
    internalPath1.quadraticTo (446.0f, 79.0f, 442.0f, 79.0f);
    internalPath1.quadraticTo (439.0f, 79.0f, 437.0f, 79.0f);
    internalPath1.lineTo (436.0f, 78.0f);
    internalPath1.quadraticTo (435.0f, 78.0f, 435.0f, 79.0f);
    internalPath1.quadraticTo (435.0f, 78.0f, 432.0f, 79.0f);
    internalPath1.quadraticTo (430.0f, 79.0f, 428.0f, 78.0f);
    internalPath1.quadraticTo (427.0f, 79.0f, 426.0f, 78.0f);
    internalPath1.quadraticTo (425.0f, 78.0f, 425.0f, 77.0f);
    internalPath1.quadraticTo (426.0f, 76.0f, 425.0f, 75.0f);
    internalPath1.quadraticTo (425.0f, 73.0f, 426.0f, 68.0f);
    internalPath1.quadraticTo (426.0f, 63.0f, 426.0f, 61.0f);
    internalPath1.quadraticTo (426.0f, 57.0f, 425.0f, 54.0f);
    internalPath1.quadraticTo (426.0f, 53.0f, 427.0f, 53.0f);
    internalPath1.quadraticTo (429.0f, 53.0f, 430.0f, 54.0f);
    internalPath1.quadraticTo (432.0f, 56.0f, 433.0f, 56.0f);
    internalPath1.lineTo (433.0f, 56.0f);
    internalPath1.quadraticTo (433.0f, 56.0f, 434.0f, 54.0f);
    internalPath1.quadraticTo (434.0f, 53.0f, 435.0f, 52.0f);
    internalPath1.lineTo (435.0f, 53.0f);
    internalPath1.quadraticTo (436.0f, 52.0f, 437.0f, 51.0f);
    internalPath1.quadraticTo (439.0f, 50.0f, 439.0f, 50.0f);
    internalPath1.quadraticTo (440.0f, 50.0f, 441.0f, 51.0f);
    internalPath1.quadraticTo (442.0f, 52.0f, 443.0f, 53.0f);
    internalPath1.quadraticTo (443.0f, 55.0f, 443.0f, 56.0f);
    internalPath1.quadraticTo (440.0f, 56.0f, 438.0f, 56.0f);
    internalPath1.quadraticTo (437.0f, 57.0f, 436.0f, 56.0f);
    internalPath1.quadraticTo (435.0f, 56.0f, 435.0f, 56.0f);
    internalPath1.quadraticTo (435.0f, 58.0f, 435.0f, 61.0f);
    internalPath1.quadraticTo (435.0f, 64.0f, 435.0f, 66.0f);
    internalPath1.quadraticTo (435.0f, 69.0f, 435.0f, 71.0f);
    internalPath1.quadraticTo (436.0f, 71.0f, 441.0f, 71.0f);
    internalPath1.quadraticTo (445.0f, 71.0f, 447.0f, 72.0f);
    internalPath1.closeSubPath();

    internalPath2.clear();
    internalPath2.startNewSubPath (457.0f, 66.0f);
    internalPath2.lineTo (457.0f, 69.0f);
    internalPath2.quadraticTo (456.0f, 70.0f, 456.0f, 71.0f);
    internalPath2.quadraticTo (456.0f, 73.0f, 458.0f, 73.0f);
    internalPath2.quadraticTo (460.0f, 73.0f, 467.0f, 66.0f);
    internalPath2.quadraticTo (467.0f, 64.0f, 469.0f, 60.0f);
    internalPath2.quadraticTo (470.0f, 57.0f, 473.0f, 54.0f);
    internalPath2.quadraticTo (475.0f, 52.0f, 476.0f, 52.0f);
    internalPath2.quadraticTo (478.0f, 52.0f, 478.0f, 54.0f);
    internalPath2.quadraticTo (478.0f, 55.0f, 477.0f, 58.0f);
    internalPath2.quadraticTo (477.0f, 60.0f, 475.0f, 62.0f);
    internalPath2.quadraticTo (474.0f, 64.0f, 472.0f, 67.0f);
    internalPath2.quadraticTo (473.0f, 69.0f, 474.0f, 69.0f);
    internalPath2.quadraticTo (475.0f, 69.0f, 476.0f, 68.0f);
    internalPath2.quadraticTo (477.0f, 67.0f, 479.0f, 66.0f);
    internalPath2.lineTo (479.0f, 69.0f);
    internalPath2.quadraticTo (476.0f, 70.0f, 475.0f, 71.0f);
    internalPath2.quadraticTo (474.0f, 72.0f, 472.0f, 72.0f);
    internalPath2.quadraticTo (471.0f, 72.0f, 469.0f, 71.0f);
    internalPath2.quadraticTo (465.0f, 75.0f, 462.0f, 77.0f);
    internalPath2.quadraticTo (460.0f, 79.0f, 458.0f, 79.0f);
    internalPath2.quadraticTo (455.0f, 79.0f, 453.0f, 76.0f);
    internalPath2.quadraticTo (451.0f, 73.0f, 451.0f, 69.0f);
    internalPath2.quadraticTo (451.0f, 63.0f, 457.0f, 56.0f);
    internalPath2.quadraticTo (459.0f, 54.0f, 460.0f, 53.0f);
    internalPath2.quadraticTo (461.0f, 52.0f, 463.0f, 52.0f);
    internalPath2.quadraticTo (464.0f, 52.0f, 465.0f, 52.0f);
    internalPath2.quadraticTo (466.0f, 53.0f, 466.0f, 53.0f);
    internalPath2.quadraticTo (466.0f, 55.0f, 463.0f, 59.0f);
    internalPath2.quadraticTo (461.0f, 63.0f, 457.0f, 66.0f);
    internalPath2.closeSubPath();
    internalPath2.startNewSubPath (485.0f, 67.0f);
    internalPath2.lineTo (485.0f, 68.0f);
    internalPath2.quadraticTo (485.0f, 71.0f, 486.0f, 72.0f);
    internalPath2.quadraticTo (487.0f, 73.0f, 489.0f, 73.0f);
    internalPath2.quadraticTo (491.0f, 73.0f, 493.0f, 73.0f);
    internalPath2.quadraticTo (495.0f, 72.0f, 498.0f, 70.0f);
    internalPath2.quadraticTo (500.0f, 69.0f, 503.0f, 66.0f);
    internalPath2.lineTo (503.0f, 68.0f);
    internalPath2.quadraticTo (498.0f, 74.0f, 494.0f, 77.0f);
    internalPath2.quadraticTo (490.0f, 80.0f, 486.0f, 80.0f);
    internalPath2.quadraticTo (482.0f, 80.0f, 480.0f, 77.0f);
    internalPath2.quadraticTo (478.0f, 74.0f, 478.0f, 69.0f);
    internalPath2.quadraticTo (478.0f, 65.0f, 480.0f, 62.0f);
    internalPath2.quadraticTo (482.0f, 58.0f, 487.0f, 54.0f);
    internalPath2.quadraticTo (490.0f, 52.0f, 493.0f, 51.0f);
    internalPath2.quadraticTo (496.0f, 49.0f, 498.0f, 49.0f);
    internalPath2.quadraticTo (500.0f, 49.0f, 501.0f, 50.0f);
    internalPath2.quadraticTo (502.0f, 51.0f, 502.0f, 53.0f);
    internalPath2.quadraticTo (502.0f, 55.0f, 500.0f, 58.0f);
    internalPath2.quadraticTo (498.0f, 60.0f, 495.0f, 63.0f);
    internalPath2.quadraticTo (491.0f, 65.0f, 485.0f, 67.0f);
    internalPath2.closeSubPath();
    internalPath2.startNewSubPath (485.0f, 65.0f);
    internalPath2.quadraticTo (489.0f, 63.0f, 492.0f, 61.0f);
    internalPath2.quadraticTo (494.0f, 59.0f, 495.0f, 57.0f);
    internalPath2.quadraticTo (497.0f, 55.0f, 497.0f, 55.0f);
    internalPath2.quadraticTo (497.0f, 54.0f, 496.0f, 54.0f);
    internalPath2.quadraticTo (495.0f, 54.0f, 493.0f, 55.0f);
    internalPath2.quadraticTo (492.0f, 55.0f, 490.0f, 57.0f);
    internalPath2.quadraticTo (488.0f, 58.0f, 487.0f, 60.0f);
    internalPath2.quadraticTo (486.0f, 62.0f, 485.0f, 65.0f);
    internalPath2.closeSubPath();
    internalPath2.startNewSubPath (502.0f, 69.0f);
    internalPath2.lineTo (502.0f, 66.0f);
    internalPath2.quadraticTo (504.0f, 64.0f, 506.0f, 62.0f);
    internalPath2.quadraticTo (504.0f, 62.0f, 504.0f, 61.0f);
    internalPath2.quadraticTo (503.0f, 60.0f, 503.0f, 59.0f);
    internalPath2.quadraticTo (503.0f, 58.0f, 504.0f, 55.0f);
    internalPath2.quadraticTo (506.0f, 53.0f, 507.0f, 51.0f);
    internalPath2.quadraticTo (509.0f, 49.0f, 510.0f, 49.0f);
    internalPath2.quadraticTo (511.0f, 49.0f, 512.0f, 49.0f);
    internalPath2.quadraticTo (512.0f, 49.0f, 512.0f, 49.0f);
    internalPath2.quadraticTo (512.0f, 50.0f, 511.0f, 52.0f);
    internalPath2.quadraticTo (519.0f, 51.0f, 522.0f, 51.0f);
    internalPath2.quadraticTo (522.0f, 51.0f, 523.0f, 51.0f);
    internalPath2.quadraticTo (523.0f, 51.0f, 524.0f, 53.0f);
    internalPath2.quadraticTo (524.0f, 54.0f, 524.0f, 55.0f);
    internalPath2.quadraticTo (524.0f, 56.0f, 524.0f, 57.0f);
    internalPath2.quadraticTo (523.0f, 58.0f, 521.0f, 60.0f);
    internalPath2.quadraticTo (519.0f, 62.0f, 517.0f, 65.0f);
    internalPath2.quadraticTo (516.0f, 68.0f, 516.0f, 69.0f);
    internalPath2.quadraticTo (516.0f, 71.0f, 518.0f, 71.0f);
    internalPath2.quadraticTo (521.0f, 71.0f, 527.0f, 66.0f);
    internalPath2.lineTo (527.0f, 69.0f);
    internalPath2.quadraticTo (524.0f, 72.0f, 521.0f, 74.0f);
    internalPath2.quadraticTo (519.0f, 76.0f, 517.0f, 77.0f);
    internalPath2.quadraticTo (515.0f, 79.0f, 514.0f, 79.0f);
    internalPath2.quadraticTo (512.0f, 79.0f, 511.0f, 77.0f);
    internalPath2.quadraticTo (510.0f, 75.0f, 510.0f, 72.0f);
    internalPath2.quadraticTo (510.0f, 71.0f, 511.0f, 69.0f);
    internalPath2.quadraticTo (512.0f, 66.0f, 514.0f, 64.0f);
    internalPath2.quadraticTo (515.0f, 61.0f, 517.0f, 59.0f);
    internalPath2.quadraticTo (516.0f, 59.0f, 515.0f, 59.0f);
    internalPath2.quadraticTo (513.0f, 59.0f, 512.0f, 60.0f);
    internalPath2.quadraticTo (510.0f, 60.0f, 509.0f, 60.0f);
    internalPath2.quadraticTo (507.0f, 65.0f, 502.0f, 69.0f);
    internalPath2.closeSubPath();
    internalPath2.startNewSubPath (553.0f, 66.0f);
    internalPath2.lineTo (553.0f, 69.0f);
    internalPath2.quadraticTo (549.0f, 71.0f, 547.0f, 71.0f);
    internalPath2.quadraticTo (545.0f, 71.0f, 544.0f, 71.0f);
    internalPath2.quadraticTo (540.0f, 76.0f, 538.0f, 78.0f);
    internalPath2.quadraticTo (535.0f, 80.0f, 532.0f, 80.0f);
    internalPath2.quadraticTo (529.0f, 80.0f, 528.0f, 77.0f);
    internalPath2.quadraticTo (526.0f, 73.0f, 526.0f, 69.0f);
    internalPath2.quadraticTo (526.0f, 62.0f, 530.0f, 55.0f);
    internalPath2.quadraticTo (534.0f, 47.0f, 539.0f, 41.0f);
    internalPath2.quadraticTo (545.0f, 34.0f, 550.0f, 30.0f);
    internalPath2.quadraticTo (555.0f, 25.0f, 557.0f, 25.0f);
    internalPath2.quadraticTo (559.0f, 25.0f, 559.0f, 28.0f);
    internalPath2.quadraticTo (559.0f, 38.0f, 532.0f, 65.0f);
    internalPath2.quadraticTo (531.0f, 65.0f, 531.0f, 67.0f);
    internalPath2.quadraticTo (531.0f, 73.0f, 534.0f, 73.0f);
    internalPath2.quadraticTo (536.0f, 73.0f, 537.0f, 72.0f);
    internalPath2.quadraticTo (538.0f, 71.0f, 540.0f, 68.0f);
    internalPath2.quadraticTo (539.0f, 66.0f, 539.0f, 65.0f);
    internalPath2.quadraticTo (539.0f, 63.0f, 541.0f, 60.0f);
    internalPath2.quadraticTo (543.0f, 58.0f, 545.0f, 56.0f);
    internalPath2.quadraticTo (548.0f, 54.0f, 549.0f, 54.0f);
    internalPath2.quadraticTo (550.0f, 54.0f, 550.0f, 57.0f);
    internalPath2.quadraticTo (550.0f, 58.0f, 549.0f, 61.0f);
    internalPath2.quadraticTo (549.0f, 63.0f, 547.0f, 67.0f);
    internalPath2.quadraticTo (547.0f, 67.0f, 548.0f, 67.0f);
    internalPath2.quadraticTo (548.0f, 68.0f, 549.0f, 68.0f);
    internalPath2.quadraticTo (551.0f, 68.0f, 553.0f, 66.0f);
    internalPath2.closeSubPath();
    internalPath2.startNewSubPath (533.0f, 60.0f);
    internalPath2.quadraticTo (535.0f, 58.0f, 537.0f, 56.0f);
    internalPath2.quadraticTo (539.0f, 53.0f, 543.0f, 48.0f);
    internalPath2.quadraticTo (547.0f, 43.0f, 549.0f, 40.0f);
    internalPath2.quadraticTo (552.0f, 37.0f, 553.0f, 35.0f);
    internalPath2.quadraticTo (554.0f, 32.0f, 554.0f, 32.0f);
    internalPath2.quadraticTo (554.0f, 31.0f, 554.0f, 31.0f);
    internalPath2.quadraticTo (553.0f, 31.0f, 550.0f, 34.0f);
    internalPath2.quadraticTo (547.0f, 37.0f, 543.0f, 42.0f);
    internalPath2.quadraticTo (539.0f, 49.0f, 536.0f, 52.0f);
    internalPath2.quadraticTo (534.0f, 56.0f, 533.0f, 60.0f);
    internalPath2.closeSubPath();

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void XVerbAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    XVerbAudioProcessor* ourProcessor = getProcessor();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == DecayKnob)
    {
        //[UserSliderCode_DecayKnob] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::Decay, (float)DecayKnob->getValue());
        //[/UserSliderCode_DecayKnob]
    }
    else if (sliderThatWasMoved == CombDelayKnob1)
    {
        //[UserSliderCode_CombDelayKnob1] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::CombDelay1, (float)CombDelayKnob1->getValue());
        //[/UserSliderCode_CombDelayKnob1]
    }
    else if (sliderThatWasMoved == CombDelayKnob2)
    {
        //[UserSliderCode_CombDelayKnob2] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::CombDelay2, (float)CombDelayKnob2->getValue());
        //[/UserSliderCode_CombDelayKnob2]
    }
    else if (sliderThatWasMoved == CombDelayKnob3)
    {
        //[UserSliderCode_CombDelayKnob3] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::CombDelay3, (float)CombDelayKnob3->getValue());
        //[/UserSliderCode_CombDelayKnob3]
    }
    else if (sliderThatWasMoved == CombDelayKnob4)
    {
        //[UserSliderCode_CombDelayKnob4] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::CombDelay4, (float)CombDelayKnob4->getValue());
        //[/UserSliderCode_CombDelayKnob4]
    }
    else if (sliderThatWasMoved == AllpassDelayKnob1)
    {
        //[UserSliderCode_AllpassDelayKnob1] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::AllpassDelay1, (float)AllpassDelayKnob1->getValue());
        //[/UserSliderCode_AllpassDelayKnob1]
    }
    else if (sliderThatWasMoved == AllpassGainKnob1)
    {
        //[UserSliderCode_AllpassGainKnob1] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::AllpassGain1, (float)AllpassGainKnob1->getValue());
        //[/UserSliderCode_AllpassGainKnob1]
    }
    else if (sliderThatWasMoved == MixKnob)
    {
        //[UserSliderCode_MixKnob] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::Mix, (float)MixKnob->getValue());
        //[/UserSliderCode_MixKnob]
    }
    else if (sliderThatWasMoved == AllpassDelayKnob2)
    {
        //[UserSliderCode_AllpassDelayKnob2] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::AllpassDelay2, (float)AllpassDelayKnob2->getValue());
        //[/UserSliderCode_AllpassDelayKnob2]
    }
    else if (sliderThatWasMoved == AllpassGainKnob2)
    {
        //[UserSliderCode_AllpassGainKnob2] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::AllpassGain2, (float)AllpassGainKnob2->getValue());
        //[/UserSliderCode_AllpassGainKnob2]
    }
    else if (sliderThatWasMoved == LowpassCutoffKnob)
    {
        //[UserSliderCode_LowpassCutoffKnob] -- add your slider handling code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::LowpassCutoff, (float)LowpassCutoffKnob->getValue());
        //[/UserSliderCode_LowpassCutoffKnob]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void XVerbAudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    XVerbAudioProcessor* ourProcessor = getProcessor();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == BypassButton)
    {
        //[UserButtonCode_BypassButton] -- add your button handler code here..
        ourProcessor->setParameterNotifyingHost(XVerbAudioProcessor::MasterBypass, (float)BypassButton->getToggleState());
        //[/UserButtonCode_BypassButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void XVerbAudioProcessorEditor::visibilityChanged()
{
    //[UserCode_visibilityChanged] -- Add your code here...
    XVerbAudioProcessor* ourProcessor = getProcessor();
    ourProcessor->RaiseUIUpdateFlag();
    //[/UserCode_visibilityChanged]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void XVerbAudioProcessorEditor::timerCallback(){
    XVerbAudioProcessor* ourProcessor = getProcessor();
    //exchange any data you want between UI elements and the plugin "ourProcessor"
    if(ourProcessor->NeedsUIUpdate()){
        BypassButton->setToggleState(1.0f == ourProcessor->getParameter(XVerbAudioProcessor::MasterBypass), false);
        MixKnob->setValue(ourProcessor->getParameter(XVerbAudioProcessor::Mix), juce::dontSendNotification);
        DecayKnob->setValue(ourProcessor->getParameter(XVerbAudioProcessor::Mix), juce::dontSendNotification);
        CombDelayKnob1->setValue(ourProcessor->getParameter(XVerbAudioProcessor::CombDelay1), juce::dontSendNotification);
        CombDelayKnob2->setValue(ourProcessor->getParameter(XVerbAudioProcessor::CombDelay2), juce::dontSendNotification);
        CombDelayKnob3->setValue(ourProcessor->getParameter(XVerbAudioProcessor::CombDelay3), juce::dontSendNotification);
        CombDelayKnob4->setValue(ourProcessor->getParameter(XVerbAudioProcessor::CombDelay4), juce::dontSendNotification);
        AllpassDelayKnob1->setValue(ourProcessor->getParameter(XVerbAudioProcessor::AllpassDelay1), juce::dontSendNotification);
        AllpassGainKnob1->setValue(ourProcessor->getParameter(XVerbAudioProcessor::AllpassGain1), juce::dontSendNotification);
        AllpassDelayKnob2->setValue(ourProcessor->getParameter(XVerbAudioProcessor::AllpassDelay2), juce::dontSendNotification);
        AllpassGainKnob2->setValue(ourProcessor->getParameter(XVerbAudioProcessor::AllpassGain2), juce::dontSendNotification);
        LowpassCutoffKnob->setValue(ourProcessor->getParameter(XVerbAudioProcessor::LowpassCutoff), juce::dontSendNotification);
        ourProcessor->ClearUIUpdateFlag();
        //std::cout << "UIUpdated" << std::endl;
    }

}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="XVerbAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="XVerbAudioProcessor* ownerFilter" variableInitialisers="AudioProcessorEditor(ownerFilter)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="864" initialHeight="296">
  <METHODS>
    <METHOD name="visibilityChanged()"/>
  </METHODS>
  <BACKGROUND backgroundColour="ff000000">
    <PATH pos="0 0 100 100" fill="solid: fff0ffff" hasStroke="0" nonZeroWinding="1">s 333.29 71.4 q 328.13 76.78 323.87 77.01 q 323.49 77.16 323.04 77.16 q 322.52 77.16 321.62 76.82 q 320.72 76.48 320.35 76.48 q 319.75 76.48 319.23 76.93 l 311.37 77.01 q 311.37 73.04 311.3 69 q 311 64.14 308.08 62.2 q 307.71 57.19 307.63 51.28 q 307.56 47.39 307.63 40.58 q 307.63 32.72 307.63 29.51 q 312.05 28.91 324.31 29.58 q 327.38 30.26 329.63 33.85 q 331.65 37.06 331.65 40.5 q 331.65 43.94 329.85 47.27 q 328.05 50.6 325.36 52.77 q 324.99 52.92 324.39 52.32 q 323.72 53 323.87 53.22 q 324.39 53.74 326.41 54.04 q 327.98 54.34 328.5 55.61 q 329.25 55.39 330.22 54.31 q 331.2 53.22 332.32 53.3 q 335.39 56.66 335.39 62.05 q 335.39 66.69 333.29 71.4 x s 323.87 41.25 l 323.94 41.25 l 323.42 41.7 q 323.34 41.55 322.52 40.8 q 322 40.28 322.07 39.83 q 321.25 38.33 320.42 36.84 q 319.23 35.27 317.43 35.57 q 317.51 39.98 317.36 49.63 l 318.26 48.66 q 318.55 48.73 318.85 48.73 q 319.6 48.73 320.39 47.61 q 321.17 46.49 321.92 46.49 q 322.37 46.49 322.97 46.79 q 323.12 46.26 323.98 44.92 q 324.84 43.57 324.84 42.9 q 324.84 42 323.87 41.25 x s 325.81 59.8 l 325.74 59.8 q 325.74 58.91 324.5 57.56 q 323.27 56.21 323.49 55.17 q 322.74 56.44 321.25 56.44 q 320.42 56.44 319.68 56.06 l 319.75 56.96 q 319.53 57.41 318.33 57.56 q 317.81 56.81 317.81 56.59 q 316.61 58.38 317.36 58.83 q 317.43 59.95 317.28 64.74 q 317.21 68.33 317.73 70.58 q 318.63 69 320.2 69 q 320.57 69 321.51 69.08 q 322.44 69.15 322.97 69.15 q 324.84 68.11 325.21 64.96 q 325.81 59.88 325.81 59.8 x s 361.94 69.6 l 361.87 69.6 q 361.34 70.72 361.42 72.89 q 361.49 75.96 361.49 76.04 q 361.12 76.19 360.52 75.51 q 359.55 75.89 359.55 76.93 q 359.55 77.08 359.62 77.46 q 359.62 77.91 359.62 78.06 q 359.62 78.88 359.17 79.25 q 358.13 78.43 356.37 78.09 q 354.61 77.76 353.04 77.46 q 353.49 67.28 351.77 57.41 q 351.77 57.48 351.77 55.39 q 351.84 53.89 351.32 53.22 l 350.8 53.74 q 350.8 53.59 351.32 53.18 q 351.84 52.77 351.84 52.32 q 351.84 52.1 351.77 51.87 l 351.24 51.35 q 349.82 51.8 349.82 54.04 q 349.82 55.54 348.78 56.06 q 349.15 56.44 349.15 56.96 q 349.15 57.26 349.04 57.78 q 348.92 58.31 348.92 58.61 q 348.92 59.28 349.45 59.73 q 349.45 60.18 349.45 67.81 q 349.45 72.67 348.85 76.04 l 348.85 77.31 q 348.33 77.23 347.65 77.23 q 346.91 77.23 345.48 77.34 q 344.06 77.46 343.39 77.46 q 340.62 77.46 339.57 76.04 l 340.1 48.13 q 339.65 46.04 339.65 42.37 l 339.65 36.99 q 339.57 33.02 339.13 30.85 q 339.42 29.43 341.22 29.43 q 342.34 29.43 344.21 30.03 q 345.11 29.58 346.68 29.58 q 347.13 29.58 348.1 29.66 q 349.15 29.66 349.6 29.66 q 352.52 29.66 353.56 27.71 q 354.91 27.79 356.44 28.98 q 357.98 30.18 359.17 30.33 q 362.24 32.87 362.24 38.26 q 362.24 39.46 361.04 47.69 l 357.23 51.35 q 358.05 53.52 359.02 60.7 q 359.85 66.69 361.94 69.6 x s 356.7 37.44 l 356.78 37.51 q 356.85 38.04 356.85 33.85 q 356.85 31.83 355.81 30.85 q 355.13 31.9 354.72 34.41 q 354.31 36.91 353.56 37.96 q 351.69 37.81 351.39 35.57 q 350.72 31.9 350.72 31.83 l 350.72 32.8 q 350.42 33.1 350.05 33.47 q 349.67 33.85 349.3 33.7 q 349.3 34.15 348.89 35.08 q 348.48 36.02 348.48 36.39 q 348.48 37.06 349.3 37.44 q 349.07 38.93 349.07 40.58 q 349.07 41.48 349.22 44.69 q 349.45 47.24 349.3 49.03 q 349.97 49.11 350.57 49.11 q 353.19 49.11 354.09 46.79 q 354.39 46.11 354.91 41.85 q 355.36 38.63 356.7 37.44 x s 392.76 59.06 l 392.83 58.98 q 392.69 59.73 392.16 65.64 q 391.71 69.75 390.96 72.22 q 390.52 72.37 390.14 72.37 q 389.39 72.37 388.91 71.21 q 388.42 70.05 387.97 70.05 q 387.52 70.05 386.7 70.72 q 385.35 70.05 384.08 69.34 q 382.81 68.63 382.96 66.98 l 383.56 66.61 q 382.81 62.95 382.36 50.38 q 382.06 39.76 379.82 34.37 q 379.22 34.59 379.22 35.27 q 379.3 36.31 379.3 36.24 l 377.87 33.92 q 377.43 34.37 377.43 35.49 q 377.5 36.99 377.43 37.21 q 376.45 37.06 376 37.74 q 375.56 38.41 375.11 39.08 l 376.53 63.24 l 375.56 64.22 l 375.11 63.77 q 374.81 63.92 372.04 66.31 q 370.39 67.73 368.15 67.51 q 367.4 62.72 366.65 57.86 q 365.83 51.8 365.83 47.61 q 365.83 36.46 371.89 31.15 q 372.56 31 374.96 30.11 q 376.9 29.36 378.17 29.36 q 379.22 29.36 380.19 29.81 q 380.34 29.21 381.09 29.21 q 381.84 29.21 381.99 29.13 q 382.74 30.41 384.38 30.26 q 388.42 33.17 390.22 38.33 q 391.56 42.15 391.86 48.43 q 392.09 53.52 392.31 58.61 x s 389.62 76.56 q 388.87 76.63 387.75 76.48 q 386.4 76.26 386.03 76.26 q 384.83 76.26 384.08 77.08 l 383.11 78.95 q 382.74 78.5 381.5 78.5 q 380.27 78.5 379.89 77.98 q 379.67 78.5 379 78.5 q 378.55 78.5 378.02 78.5 q 378.1 78.13 377.5 77.53 q 377.2 78.13 376.45 78.13 q 374.81 78.06 375.18 77.98 l 374.73 77.53 q 374.13 78.13 373.83 77.98 q 373.31 77.76 373.31 76.63 q 375.63 76.11 376.15 74.39 q 375.7 73.34 374.43 73.04 q 372.71 72.67 372.41 72.45 q 372.04 72.52 371.07 72.82 q 370.09 73.12 369.65 73.12 q 368.6 73.12 368.22 71.62 q 368 71.1 368 70.72 q 368 69.98 369.38 69.75 q 370.77 69.53 370.99 69.23 q 372.41 68.18 373.76 67.13 q 375.48 65.79 377.05 65.94 q 377.5 66.76 377.8 69 q 378.1 71.25 378.55 72.15 q 379.37 73.57 381.24 73.87 l 381.91 72.22 q 382.21 71.25 382.96 71.1 q 383.63 71.1 384.83 71.88 q 386.03 72.67 386.78 72.67 q 387.22 72.67 387.75 72.45 q 388.42 73.12 388.87 74.54 q 389.47 76.19 389.62 76.56 x s 421.41 76.56 l 421.48 76.63 q 420.29 76.63 419.99 76.19 l 419.54 76.56 l 419.09 76.19 q 418.94 76.19 417.15 76.19 q 415.58 76.19 414.9 76.56 q 412.58 74.84 412.21 70.13 q 411.69 63.99 411.16 62.65 q 409.29 58.16 409.74 52.47 l 408.84 51.05 q 408.84 52.25 407.91 52.96 q 406.97 53.67 406 54.34 q 405.78 54.42 405.55 54.42 q 405.03 54.42 404.28 53.93 q 403.53 53.45 403.23 53.37 q 402.78 54.19 402.04 53.63 q 401.29 53.07 400.99 53.82 q 401.36 55.17 404.43 55.32 q 407.5 55.46 407.5 56.59 q 407.5 57.41 406.45 58.98 q 404.88 61.22 405.33 65.34 q 405.78 70.05 405.1 72 q 404.95 72.37 404.95 72.82 q 404.95 73.34 405.25 74.2 q 405.55 75.06 405.55 75.51 q 405.55 76.11 405.1 76.63 q 403.83 75.89 401.1 76.45 q 398.37 77.01 397.29 75.85 q 396.2 74.69 396.2 72.89 q 396.2 72 396.5 70.13 q 396.8 68.26 396.8 67.28 q 396.8 66.01 396.35 64.96 q 396.87 62.5 396.8 58.38 q 396.72 51.87 396.72 51.5 q 396.2 51.57 397.77 51.57 q 398.37 51.57 398.59 51.05 q 397.17 49.63 397.17 47.46 q 397.17 46.56 397.51 44.62 q 397.85 42.67 397.85 41.7 q 397.85 40.65 397.47 38.67 q 397.1 36.69 397.1 35.64 q 397.1 33.92 397.58 30.59 q 398.07 27.26 398.15 25.39 l 407.05 25.92 q 407.12 28.31 406.37 32.5 q 405.55 36.99 405.55 38.93 q 405.55 40.73 406 42.22 q 406 42.3 406 43.2 q 405.93 43.87 406.45 44.02 q 406.15 41.7 408.17 38.63 q 410.34 35.27 410.34 33.4 q 410.34 32.65 410.19 31.98 q 411.24 31.08 412.06 28.61 q 412.88 26.14 413.93 25.39 l 421.41 26.37 l 421.41 27.79 l 420.96 27.71 q 419.91 30.26 418.87 32.8 q 417.45 35.72 415.8 37.59 q 415.35 39.53 415.35 41.63 q 415.35 45.22 417.37 52.02 q 419.39 59.06 419.54 62.57 q 419.69 63.69 420.74 68.56 q 421.56 72.15 421.56 74.46 q 421.56 75.59 421.41 76.56 x s 446.62 35.87 q 445.95 35.94 445.12 35.94 q 443.4 35.94 440.56 35.49 q 437.04 35.04 436.3 34.97 q 435.25 36.54 435.25 39.38 q 435.25 45.52 435.32 44.69 q 436.37 45.29 436.37 46.94 q 436.3 49.18 436.37 49.26 q 435.85 49.48 435.85 50.75 q 435.02 50.45 434.13 49.56 q 432.93 48.43 433 47.46 l 432.56 47.91 l 432.11 47.46 q 431.51 47.54 430.05 46.86 q 428.59 46.19 427.99 45.59 q 427.99 44.39 428.37 44.24 l 427.39 43.2 l 426.95 43.87 q 425.97 36.09 426.87 27.86 q 429.71 28.31 433.15 28.39 q 435.47 28.46 439.66 28.39 q 444.45 28.31 446.54 28.31 q 447.44 29.13 447.44 30.48 q 447.44 31.3 447.03 33.14 q 446.62 34.97 446.62 35.87 x s 447.07 71.7 l 447.07 71.62 q 446.62 72.59 446.54 73.87 q 446.47 74.69 446.54 76.19 q 446.62 77.91 446.62 78.58 q 446.02 78.58 441.83 78.58 q 439.29 78.58 437.27 79.1 l 435.85 77.61 q 435.25 78.21 435.4 78.58 q 435.02 78.5 431.96 78.58 q 429.56 78.58 428.37 78.13 q 427.17 79.4 425.52 78.13 q 424.93 77.68 425.37 76.6 q 425.82 75.51 425.08 74.99 q 425.15 72.59 425.6 67.58 q 426.05 63.09 426.05 60.55 q 426.05 57.11 425.45 53.97 q 426.27 53.15 427.32 53.15 q 428.52 53.15 430.16 54.27 q 432.48 55.84 432.56 55.84 l 433 56.36 q 433.08 56.14 433.75 53.97 q 434.13 52.55 434.87 52.1 l 435.32 52.55 q 435.62 52.4 437.27 51.13 q 438.54 50.23 439.29 50.23 q 440.11 50.23 440.86 51.13 q 442.13 51.8 442.54 53.18 q 442.95 54.57 443.33 55.91 q 439.96 56.06 437.79 55.84 q 437.27 56.66 436.3 56.1 q 435.32 55.54 434.87 56.29 q 434.87 57.63 434.87 61.15 q 434.8 64.29 434.87 66.09 q 434.95 68.85 435.32 71.17 q 435.92 71.17 441.01 71.17 q 444.52 71.17 447.07 71.7 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: fff0ffff" hasStroke="0" nonZeroWinding="1">s 457.25 66.09 l 456.53 69.47 q 456.37 70.11 456.37 70.92 q 456.37 73.09 458.17 73.09 q 459.9 73.09 466.58 66.33 q 466.62 63.72 468.53 60.3 q 470.44 56.88 472.75 54.31 q 475.06 51.74 476.19 51.74 q 477.96 51.74 477.96 54.07 q 477.96 55.48 477.27 57.51 q 476.59 59.54 475.26 61.89 q 473.94 64.24 472.01 66.74 q 473.01 68.54 474.06 68.54 q 474.94 68.54 476.01 67.92 q 477.07 67.3 478.68 66.01 l 478.68 68.71 q 476.43 70.47 475.12 71.12 q 473.81 71.76 471.76 71.76 q 470.96 71.76 468.87 70.68 q 464.77 75.02 462.2 77.17 q 459.62 79.32 458.01 79.32 q 455.24 79.32 453.29 76 q 451.34 72.69 451.34 68.71 q 451.34 63.36 457.37 55.88 q 459.18 53.63 460.29 52.8 q 461.39 51.98 462.8 51.98 q 464 51.98 465.09 52.42 q 466.18 52.86 466.18 53.47 q 466.18 55.48 463.48 59.36 q 460.79 63.24 457.25 66.09 x s 485.03 67.46 l 485.03 68.46 q 485.03 70.84 486.2 72.16 q 487.36 73.49 489.25 73.49 q 491.22 73.49 493.34 72.57 q 495.45 71.64 497.54 70.11 q 499.63 68.58 502.64 66.01 l 502.64 68.46 q 498.1 73.93 494.12 76.85 q 490.14 79.76 486.04 79.76 q 482.46 79.76 480.37 76.99 q 478.28 74.21 478.28 69.39 q 478.28 65.17 480.25 61.73 q 482.22 58.29 486.68 54.47 q 489.74 51.86 492.75 50.53 q 495.77 49.21 498.14 49.21 q 500.03 49.21 501.14 50.07 q 502.24 50.93 502.24 52.66 q 502.24 55.2 500.35 57.71 q 498.46 60.22 494.58 62.69 q 490.7 65.17 485.03 67.46 x s 485.43 64.85 q 489.05 63.44 491.63 61.35 q 494.2 59.26 495.43 57.35 q 496.65 55.44 496.65 54.55 q 496.65 53.63 495.81 53.63 q 495.08 53.63 493.46 54.55 q 491.83 55.48 490.16 56.96 q 488.49 58.45 487.16 60.46 q 485.84 62.47 485.43 64.85 x s 502.24 69.11 l 502.24 66.49 q 504.41 63.92 505.54 62.11 q 504.25 61.67 503.67 61.03 q 503.09 60.38 503.09 59.1 q 503.09 57.65 504.29 55.44 q 505.5 53.23 507.27 51.3 q 509.04 49.37 510.48 48.8 q 511.05 48.52 511.57 48.52 q 512.37 48.52 512.37 49.29 q 512.37 49.97 511.13 52.06 q 519.41 50.77 521.58 50.77 q 522.43 50.77 522.75 50.93 q 523.43 51.3 523.87 52.62 q 524.31 53.95 524.31 55.28 q 524.31 56.12 523.57 57.11 q 522.83 58.09 521.02 59.98 q 518.89 62.27 517.44 64.97 q 515.99 67.66 515.99 69.03 q 515.99 70.92 518.32 70.92 q 520.78 70.92 526.85 65.93 l 526.85 68.62 q 523.51 72.12 521.34 74.13 q 519.17 76.14 517.32 77.33 q 515.47 78.52 514.02 78.52 q 512.33 78.52 511.21 76.97 q 510.08 75.42 510.08 72.48 q 510.08 70.76 510.97 68.54 q 511.85 66.33 513.56 63.74 q 515.27 61.15 517.4 58.57 q 516.27 58.81 514.87 59.08 q 513.46 59.34 511.89 59.62 q 510.32 59.9 509.48 60.06 q 506.99 65.05 502.24 69.11 x s 553.3 66.09 l 553.3 68.71 q 549.12 71.36 546.71 71.36 q 545.38 71.36 543.9 70.92 q 540.28 75.5 537.68 77.63 q 535.09 79.76 532.48 79.76 q 529.46 79.76 527.83 76.59 q 526.2 73.41 526.2 68.71 q 526.2 62.31 530.06 54.77 q 533.92 47.23 539.37 40.66 q 544.82 34.09 549.93 29.79 q 555.03 25.48 556.84 25.48 q 558.57 25.48 558.57 27.86 q 558.57 38.39 531.55 64.6 q 531.47 65.33 531.47 67.46 q 531.47 73.01 534.45 73.01 q 535.61 73.01 536.8 72.06 q 537.99 71.12 540.44 68.46 q 539.47 66.29 539.47 65.25 q 539.47 63.04 541.28 60.46 q 543.09 57.89 545.4 56.02 q 547.72 54.15 548.76 54.15 q 550.41 54.15 550.41 56.52 q 550.41 58.33 549.46 60.87 q 548.52 63.4 546.71 66.65 q 547.39 67.22 547.8 67.48 q 548.2 67.74 549 67.74 q 550.85 67.74 553.3 66.09 x s 532.88 60.06 q 534.97 58.25 537.08 55.78 q 539.19 53.31 543.25 48.2 q 547.15 43.29 549.38 40.02 q 551.62 36.74 552.74 34.57 q 553.87 32.4 553.87 31.59 q 553.87 30.99 553.55 30.99 q 552.66 30.99 549.87 33.91 q 547.07 36.82 543.49 41.89 q 538.55 48.88 536.34 52.42 q 534.13 55.96 532.88 60.06 x</PATH>
  </BACKGROUND>
  <LABEL name="Decay Label" id="a23f674e6696d274" memberName="DecayLabel"
         virtualName="" explicitFocusOrder="0" pos="33.333% 35.135% 10.185% 8.108%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Decay"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="18" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Decay Knob" id="3915f5df8ccf2427" memberName="DecayKnob"
          virtualName="" explicitFocusOrder="0" pos="32.407% 45.946% 12.037% 33.108%"
          bkgcol="ff5f9ea0" trackcol="ffff7f50" rotarysliderfill="ff7fffd4"
          rotaryslideroutline="ff5f9ea0" textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0"
          textboxhighlight="ffff7f50" textboxoutline="ff5f9ea0" min="0.010000000000000000208"
          max="60" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Comb Delay Label 1" id="139264e675bf5151" memberName="CombDelayLabel1"
         virtualName="" explicitFocusOrder="0" pos="0% 2.703% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Comb Delay 1"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Comb Delay Knob 1" id="781e4d63b5fdb14" memberName="CombDelayKnob1"
          virtualName="" explicitFocusOrder="0" pos="0.926% 13.514% 13.889% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="1" max="100" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Comb Delay Label 2" id="cfce5dbbb4f1d462" memberName="CombDelayLabel2"
         virtualName="" explicitFocusOrder="0" pos="15.741% 2.703% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Comb Delay 2"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Comb Delay Knob 2" id="d57f521d23945313" memberName="CombDelayKnob2"
          virtualName="" explicitFocusOrder="0" pos="16.667% 13.514% 13.889% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="1" max="100" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Comb Delay Label 3" id="c3c817521aa032be" memberName="CombDelayLabel3"
         virtualName="" explicitFocusOrder="0" pos="0% 51.351% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Comb Delay 3"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Comb Delay Knob 3" id="b032a082bf45549d" memberName="CombDelayKnob3"
          virtualName="" explicitFocusOrder="0" pos="0.926% 62.162% 13.889% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="1" max="100" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Comb Delay Label 4" id="178e7bb5ae7d849f" memberName="CombDelayLabel4"
         virtualName="" explicitFocusOrder="0" pos="14.815% 51.351% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Comb Delay 4"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Comb Delay Knob 4" id="57a3aad73bbfdf0d" memberName="CombDelayKnob4"
          virtualName="" explicitFocusOrder="0" pos="144 184 120 96" trackcol="ffff7f50"
          rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0" textboxtext="fff0f8ff"
          textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50" textboxoutline="ff5f9ea0"
          min="1" max="100" int="0" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Allpass Delay Label 1" id="f958e7e2950f741f" memberName="AllpassDelayLabel1"
         virtualName="" explicitFocusOrder="0" pos="67.593% 2.703% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Allpass Delay 1"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Allpass Delay Knob 1" id="869bd45ddd07d6fe" memberName="AllpassDelayKnob1"
          virtualName="" explicitFocusOrder="0" pos="68.519% 13.514% 14.815% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="1" max="20" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Allpass Gain Label 1" id="63defba1abf34ab6" memberName="AllpassGainLabel1"
         virtualName="" explicitFocusOrder="0" pos="83.333% 2.703% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Allpass Gain 1"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Allpass Gain Knob 1" id="1783dfe89a140fc1" memberName="AllpassGainKnob1"
          virtualName="" explicitFocusOrder="0" pos="84.259% 13.514% 14.815% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="0" max="1" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Mix Label" id="20f48f39f2927cb8" memberName="MixLabel"
         virtualName="" explicitFocusOrder="0" pos="45.37% 35.135% 10.185% 8.108%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Mix"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="18" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Mix Knob" id="a6e532f29a4cf942" memberName="MixKnob" virtualName=""
          explicitFocusOrder="0" pos="44.444% 45.946% 12.037% 33.108%"
          bkgcol="ff5f9ea0" trackcol="ffff7f50" rotarysliderfill="ff7fffd4"
          rotaryslideroutline="ff5f9ea0" textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0"
          textboxhighlight="ffff7f50" textboxoutline="ff5f9ea0" min="0"
          max="1" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Allpass Delay Label 1" id="bad10470168fb9ed" memberName="AllpassDelayLabel2"
         virtualName="" explicitFocusOrder="0" pos="67.593% 51.351% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Allpass Delay 2"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Allpass Delay Knob 2" id="fcf48cdf13930e58" memberName="AllpassDelayKnob2"
          virtualName="" explicitFocusOrder="0" pos="68.519% 62.162% 14.815% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="1" max="20" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Allpass Gain Label 2" id="88528c5fb6df9b21" memberName="AllpassGainLabel3"
         virtualName="" explicitFocusOrder="0" pos="83.333% 51.351% 16.667% 12.162%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Allpass Gain 2"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="16" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="Allpass Gain Knob 2" id="f8ba3b7dc7e423b8" memberName="AllpassGainKnob2"
          virtualName="" explicitFocusOrder="0" pos="84.259% 62.162% 14.815% 32.432%"
          trackcol="ffff7f50" rotarysliderfill="ff7fffd4" rotaryslideroutline="ff5f9ea0"
          textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0" textboxhighlight="ffff7f50"
          textboxoutline="ff5f9ea0" min="0" max="1" int="0" style="Rotary"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <TEXTBUTTON name="Bypass Button" id="8aa6c522d03341a2" memberName="BypassButton"
              virtualName="" explicitFocusOrder="0" pos="41.667% 86.486% 17.361% 8.108%"
              bgColOff="ff5f9ea0" bgColOn="ffff7f50" textCol="fff0ffff" textColOn="fff0ffff"
              buttonText="Bypass" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="Lowpass Cutoff" id="da9addd18b45e924" memberName="LowpassCutoffLabel"
         virtualName="" explicitFocusOrder="0" pos="57.407% 29.73% 11.111% 16.554%"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="ffffff" labelText="Lowpass Cutoff"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default monospaced font" fontsize="18" bold="1" italic="0"
         justification="36"/>
  <SLIDER name="LowpassCutoff Knob" id="5a515ddc99ab2af5" memberName="LowpassCutoffKnob"
          virtualName="" explicitFocusOrder="0" pos="56.829% 45.946% 12.037% 33.108%"
          bkgcol="ff5f9ea0" trackcol="ffff7f50" rotarysliderfill="ff7fffd4"
          rotaryslideroutline="ff5f9ea0" textboxtext="fff0f8ff" textboxbkgd="ff5f9ea0"
          textboxhighlight="ffff7f50" textboxoutline="ff5f9ea0" min="20"
          max="10000" int="0" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: brokeVerb_png, 5778, "brokeVerb.png"
static const unsigned char resource_XVerbAudioProcessorEditor_brokeVerb_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,52,0,0,0,60,8,6,0,0,0,232,165,70,70,0,0,0,6,98,75,71,68,0,255,0,255,
0,255,160,189,167,147,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,0,7,116,73,77,69,7,221,12,15,23,45,9,191,120,15,184,0,0,0,29,105,84,88,116,67,111,109,109,101,110,116,0,0,0,0,0,67,
114,101,97,116,101,100,32,119,105,116,104,32,71,73,77,80,100,46,101,7,0,0,21,246,73,68,65,84,120,218,237,93,123,120,84,213,181,95,107,159,115,102,38,153,71,134,16,2,4,164,8,68,196,71,11,138,175,75,133,
212,182,22,181,90,175,90,124,87,171,125,221,246,250,6,245,171,218,166,197,139,87,185,218,106,107,109,213,94,149,66,91,35,210,162,130,143,214,54,130,218,138,49,96,41,242,186,104,16,129,24,66,152,100,206,
153,199,153,179,247,234,31,12,222,195,97,30,103,146,76,102,72,246,239,251,242,71,206,236,199,218,175,223,89,107,237,189,215,1,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,232,61,48,95,2,30,139,81,127,84,68,68,58,0,236,2,196,85,150,16,191,243,5,2,127,233,143,114,203,93,190,76,72,69,163,51,81,81,
46,7,162,6,0,168,67,196,128,75,249,118,2,64,51,9,177,68,11,6,87,15,84,255,41,149,149,216,155,178,147,209,232,5,10,99,207,32,34,203,210,166,77,177,72,100,70,104,204,152,174,82,140,121,127,182,85,98,136,
17,218,33,16,226,21,211,52,175,173,168,174,254,168,28,8,173,88,242,217,97,236,217,51,202,231,247,63,6,0,95,238,7,6,94,30,215,245,111,5,70,142,236,40,71,66,75,69,163,51,144,177,63,35,162,47,163,248,0,187,
45,211,60,205,23,14,111,47,155,49,151,132,86,20,116,118,118,6,194,225,240,151,24,99,215,0,128,96,140,157,59,248,8,45,61,169,133,105,158,237,9,135,215,149,29,161,245,147,124,54,109,101,138,194,216,75,136,
56,174,223,228,35,122,159,115,62,219,27,10,109,45,39,66,75,70,163,147,21,69,121,19,1,170,179,200,221,35,82,169,153,158,112,248,221,114,27,115,73,104,189,199,142,29,59,124,181,181,181,227,20,69,57,18,17,
39,33,226,100,0,152,10,0,167,32,162,39,61,246,207,51,198,206,27,148,132,150,110,224,46,51,30,159,94,89,83,179,187,220,38,119,127,200,7,0,16,221,181,107,120,69,85,85,11,34,142,47,130,124,91,245,61,123,
78,10,143,31,223,93,14,132,102,116,116,140,244,250,253,127,67,196,35,179,200,107,90,68,103,251,2,129,87,203,241,37,38,9,173,47,70,141,216,130,136,245,121,210,220,166,40,202,125,197,146,129,149,220,230,
69,172,243,86,86,62,86,182,54,121,63,200,87,89,85,245,72,49,200,44,45,95,125,96,196,136,159,151,67,95,117,116,116,248,189,129,192,138,28,100,70,130,232,235,125,33,51,137,242,197,170,85,171,166,236,221,
187,55,152,72,36,142,176,44,107,38,17,173,205,48,7,222,42,166,12,253,66,104,74,101,37,218,255,86,175,89,163,166,76,115,130,32,186,131,136,98,46,138,56,39,21,141,206,40,230,91,183,84,242,153,145,200,52,
2,184,200,133,166,149,16,68,63,72,153,230,132,247,119,238,244,166,82,169,73,36,196,143,136,40,233,162,154,203,204,174,174,227,74,57,153,91,90,90,212,225,129,192,51,8,112,98,14,19,254,86,79,32,240,219,
129,144,199,57,230,110,255,36,45,245,30,13,13,13,188,166,166,70,175,168,168,248,72,211,180,213,0,240,170,99,142,139,72,36,242,78,81,21,144,98,155,36,169,238,238,233,168,170,127,205,183,147,71,68,191,80,
253,254,239,13,180,201,84,108,249,44,195,184,31,17,111,206,83,118,146,132,248,130,22,12,190,126,72,126,93,159,5,136,175,28,240,65,100,45,67,136,251,212,64,224,182,82,153,156,150,174,63,142,140,93,155,
163,141,15,170,126,255,141,253,49,105,139,185,51,43,209,175,38,232,83,136,248,53,219,28,216,192,24,43,234,139,183,232,38,167,86,85,213,66,68,141,46,146,126,174,20,157,94,116,249,16,63,159,55,13,209,189,
153,200,12,0,64,13,4,94,3,162,252,62,7,198,190,80,170,137,107,197,98,63,204,69,102,64,244,204,221,11,23,222,36,151,248,144,195,36,199,255,111,23,187,194,1,241,161,89,166,249,180,139,100,99,74,182,32,139,
43,223,17,121,53,14,33,126,211,151,223,211,24,87,138,190,51,13,227,235,8,208,152,67,51,123,109,199,158,61,87,54,54,54,146,92,223,67,14,199,56,230,194,154,65,65,104,247,62,244,208,206,252,138,12,134,74,
213,235,69,149,143,104,88,190,36,127,107,109,253,32,215,239,235,183,108,121,223,69,61,195,7,186,223,18,134,113,38,3,120,52,171,72,0,255,212,59,59,207,31,63,126,124,82,174,237,161,133,88,44,54,6,17,195,
14,19,180,232,132,86,116,31,90,177,253,30,82,190,210,200,103,70,34,83,153,166,173,66,196,96,22,205,236,163,84,50,121,90,127,30,76,46,118,95,72,244,163,213,99,89,103,43,138,178,194,54,31,146,27,55,110,
12,30,123,236,177,169,98,214,171,150,75,7,16,17,47,231,1,34,34,33,167,105,90,51,139,68,62,197,60,158,149,8,16,204,162,153,69,68,50,57,187,24,100,38,113,120,0,17,63,237,120,180,174,216,100,86,86,132,6,
136,93,101,62,66,93,114,154,2,116,239,216,49,76,213,180,23,17,96,116,22,226,79,146,16,95,241,84,87,111,144,189,53,164,9,237,4,199,163,183,7,162,222,1,241,161,53,54,54,186,81,255,63,44,85,231,187,146,143,
104,211,80,159,164,109,109,109,94,127,117,245,114,68,156,146,77,139,21,68,87,106,193,224,42,185,164,135,60,166,57,230,198,154,129,168,116,64,8,237,214,235,174,27,237,130,48,74,182,8,220,200,71,0,47,15,
229,217,217,216,216,136,99,71,140,88,132,136,167,231,48,203,111,246,4,2,207,200,181,60,180,177,119,239,222,32,0,76,180,63,179,44,107,240,16,154,230,245,94,156,47,141,72,165,22,149,106,0,242,201,71,68,
102,42,30,255,245,80,158,164,119,206,155,119,63,34,206,201,218,71,66,44,212,2,129,7,7,107,251,147,201,100,61,21,0,33,68,34,145,72,140,119,150,211,209,209,225,23,66,60,39,132,72,8,33,182,11,33,22,118,118,
118,6,122,43,87,60,30,31,199,57,191,93,8,241,134,16,162,93,8,145,20,66,108,19,66,60,100,24,198,72,183,229,152,166,57,77,8,241,132,16,98,183,16,226,229,28,233,142,19,66,60,43,132,136,8,33,214,103,74,19,
10,133,166,34,34,218,214,79,247,61,247,220,179,37,83,218,166,166,38,102,89,214,25,66,136,159,9,33,90,132,16,93,66,136,125,66,136,7,138,50,144,60,22,163,124,127,57,59,42,18,153,102,25,70,79,174,252,150,
97,252,190,172,229,211,245,251,74,37,95,127,151,211,155,114,83,186,126,67,158,241,91,236,210,173,80,22,115,178,87,117,114,126,125,129,132,246,231,166,166,166,131,20,134,246,246,246,74,33,68,115,134,180,
45,91,183,110,245,20,34,79,44,22,27,35,132,120,84,8,145,202,33,67,123,50,153,156,148,143,168,133,16,127,112,228,51,51,165,181,44,107,182,16,194,176,165,251,75,150,190,186,193,217,23,206,52,205,205,205,
10,231,252,90,33,196,246,108,242,91,150,85,112,152,173,162,104,104,77,77,77,44,17,137,140,79,25,198,237,76,211,86,103,219,218,79,155,114,235,187,19,137,111,14,228,219,182,64,249,222,237,212,245,198,161,
172,157,33,226,3,57,212,215,87,55,183,181,125,125,176,31,156,69,196,179,221,166,37,162,142,120,60,126,249,156,57,115,62,217,25,143,68,34,225,218,218,218,23,17,113,86,134,178,79,156,48,97,130,171,107,117,
45,45,45,170,16,226,135,62,159,111,43,0,212,19,209,229,201,100,242,200,61,123,246,4,56,231,179,137,104,167,173,220,145,154,166,101,124,25,111,216,176,65,227,156,255,64,211,180,245,136,120,190,227,231,
221,25,200,172,129,49,246,7,68,172,180,61,94,151,165,175,166,57,30,173,113,144,232,228,153,51,103,174,97,140,61,158,43,156,22,99,236,146,66,199,169,95,118,57,123,253,70,36,90,218,157,72,92,51,124,248,
240,104,177,223,232,189,19,143,214,196,123,122,206,25,53,122,116,108,136,19,26,203,70,246,61,201,228,5,3,177,29,95,140,49,231,66,92,233,9,4,22,231,75,183,107,215,174,10,0,152,149,158,19,2,0,146,0,96,238,
239,2,168,64,68,175,109,206,144,16,226,42,191,223,255,177,195,12,91,137,136,167,229,232,227,75,1,224,39,121,180,169,73,154,166,45,1,128,99,137,232,27,138,162,56,47,250,191,108,89,214,119,21,69,89,110,
123,118,70,134,114,166,104,154,182,56,195,78,228,39,124,231,72,127,116,154,204,124,142,245,177,62,75,254,131,8,77,8,241,182,141,24,47,98,140,61,137,136,126,23,195,56,173,44,125,104,142,78,48,128,232,25,
193,249,103,21,191,255,171,197,38,179,94,200,103,18,209,107,156,232,234,101,43,86,156,22,28,61,186,19,36,50,245,211,118,51,22,59,171,186,186,186,103,176,183,181,182,182,246,12,68,244,17,209,253,140,49,
133,49,86,201,24,11,51,198,134,49,198,124,152,6,231,252,139,0,240,128,170,170,47,101,48,195,110,78,38,147,147,108,154,212,46,71,146,163,114,201,96,89,214,89,154,166,173,3,128,19,57,231,103,103,32,51,0,
0,208,117,253,181,92,74,11,231,252,106,77,211,90,0,96,180,16,226,22,195,48,70,18,209,10,71,158,119,237,154,165,166,105,207,57,79,253,167,137,234,61,231,179,182,182,54,47,56,174,60,153,166,185,38,93,247,
119,24,99,79,35,162,159,136,182,8,33,174,55,77,115,202,238,221,187,43,19,137,196,17,68,228,148,125,108,217,18,26,17,125,64,0,143,145,16,179,231,47,92,120,177,22,12,190,81,102,11,52,78,68,31,1,192,59,8,
96,41,136,151,94,112,206,57,15,167,122,122,78,145,244,117,136,102,214,197,133,152,221,151,160,151,135,19,24,99,103,17,209,7,237,237,237,119,101,75,99,154,230,84,198,216,195,251,246,237,251,81,166,223,
53,77,251,187,207,231,219,86,91,91,107,168,170,250,50,17,205,117,36,241,228,32,179,11,25,99,203,211,90,205,61,154,166,21,114,34,224,125,135,38,56,155,136,238,105,111,111,159,168,40,202,3,129,64,160,3,
0,218,28,107,225,93,128,253,59,219,161,80,104,49,34,214,19,209,31,45,203,154,254,241,199,31,251,133,16,223,36,162,164,97,24,155,157,149,141,25,51,230,211,136,168,218,202,218,85,89,89,185,147,115,126,53,
99,236,17,0,176,132,16,183,47,93,186,116,138,162,40,63,243,122,189,155,234,234,234,226,21,21,21,31,9,33,156,125,231,47,116,172,74,18,177,150,136,118,17,209,194,119,55,109,250,249,244,233,211,173,146,152,
187,238,101,37,2,184,77,243,251,23,22,75,190,114,191,250,148,145,208,56,159,225,13,6,75,114,54,175,191,198,220,173,201,41,132,216,44,132,184,69,85,213,23,50,253,30,139,197,198,248,124,190,183,137,232,
14,69,81,158,112,83,183,174,235,181,118,179,148,136,218,24,99,71,102,48,15,143,214,52,173,21,17,43,136,168,171,179,179,115,92,109,109,173,145,131,252,206,81,20,229,5,91,185,255,197,24,187,51,79,251,150,
32,226,101,54,114,62,218,235,245,110,230,156,207,69,196,123,137,232,58,69,81,126,225,244,193,101,114,53,112,206,191,205,24,251,165,173,254,229,156,243,251,21,69,121,21,0,12,206,249,121,233,88,105,135,
32,26,141,214,4,2,129,61,182,188,49,198,88,65,164,86,146,136,181,136,88,199,24,251,201,212,41,83,86,71,218,218,170,202,220,127,132,12,241,190,132,97,156,41,117,179,79,222,130,213,10,99,47,197,58,59,71,
15,133,246,50,198,38,103,35,179,182,182,54,175,207,231,91,6,0,123,231,207,159,255,164,219,50,55,109,218,228,188,121,210,238,76,211,212,212,196,52,77,91,130,136,21,233,71,139,114,145,89,90,214,239,217,
221,59,241,120,220,77,52,227,177,182,60,250,242,229,203,183,154,166,57,13,17,23,16,209,183,156,100,6,0,144,205,111,154,97,67,96,151,162,40,75,1,32,105,89,214,231,179,145,25,0,192,230,205,155,35,142,71,
5,135,149,47,74,196,218,103,95,120,65,73,232,250,40,46,196,37,68,244,94,14,178,56,53,48,98,196,138,230,230,102,165,152,19,50,83,196,90,203,178,234,73,136,5,68,228,74,67,212,0,110,149,84,118,208,216,125,
202,83,89,185,50,125,136,178,236,224,38,58,173,27,237,44,31,198,141,27,247,115,68,60,153,136,238,41,100,167,183,190,190,222,217,111,135,92,13,186,240,194,11,47,178,59,238,45,203,90,148,199,207,118,1,34,
158,101,35,167,27,253,126,127,187,11,113,236,154,97,235,180,105,211,84,85,85,159,2,128,159,42,138,82,232,249,75,103,196,226,171,0,96,132,16,226,98,143,199,211,154,43,99,93,93,157,230,36,195,178,240,161,
205,153,51,71,248,107,107,63,246,4,2,79,71,226,241,83,40,199,181,33,68,156,49,227,164,147,110,25,200,201,222,208,208,192,189,161,208,255,169,129,192,29,156,243,243,221,92,140,39,128,147,37,141,29,162,
169,77,13,251,124,203,54,108,216,160,13,197,246,167,9,228,27,68,212,182,122,245,234,167,11,201,235,243,249,70,57,204,190,191,102,88,27,215,219,200,105,155,199,227,89,155,173,188,84,42,53,147,49,246,100,
58,173,16,66,220,162,40,202,227,249,228,72,239,224,218,157,239,111,79,156,56,241,46,0,136,183,182,182,126,191,144,54,165,231,193,241,142,54,84,2,192,79,85,85,93,153,47,127,40,20,114,146,124,193,247,129,
139,110,114,214,212,212,232,130,104,126,158,183,253,247,251,114,90,186,47,240,134,66,43,0,32,175,90,158,235,172,218,96,7,17,245,228,232,152,47,76,30,63,254,137,129,60,88,91,14,208,117,189,150,49,246,171,
244,191,79,54,52,52,20,20,45,70,85,213,227,108,253,107,25,134,209,236,240,157,77,66,68,251,119,44,254,144,141,68,56,231,183,42,138,242,39,68,12,18,209,38,206,249,44,69,81,30,112,185,62,143,114,158,234,
7,128,155,45,203,186,182,80,255,118,125,125,253,49,246,35,44,233,242,182,239,220,185,211,21,49,122,60,158,177,142,188,5,127,230,112,96,34,214,38,147,205,121,222,244,85,85,94,239,229,165,154,156,194,52,
135,244,181,38,23,154,200,197,185,180,88,68,188,252,206,185,115,239,29,74,125,82,89,89,121,55,34,214,0,0,152,166,89,240,181,61,68,60,201,246,239,138,170,170,170,125,14,194,187,196,161,193,189,224,212,
172,56,231,223,152,50,101,202,123,140,177,123,1,224,35,33,196,183,91,91,91,143,215,52,237,117,215,166,185,162,76,113,200,117,21,0,60,238,241,120,254,89,176,153,175,40,39,102,120,25,222,117,196,17,71,36,
92,230,63,218,254,63,231,188,224,175,131,13,8,161,173,89,191,254,227,188,130,48,86,50,167,251,246,206,206,205,146,182,114,152,71,85,85,47,145,16,215,229,92,160,140,205,75,233,250,245,67,161,63,76,211,
60,6,0,174,73,47,216,13,62,159,239,131,94,20,243,69,27,89,61,150,129,240,190,98,215,144,215,173,91,247,70,52,26,29,206,57,159,35,132,88,52,106,212,168,118,68,124,4,0,222,227,156,159,189,116,233,210,122,
69,81,30,45,84,171,66,196,227,29,143,198,196,227,241,123,122,229,130,64,60,209,65,102,187,214,174,93,251,187,2,242,79,181,229,109,95,176,96,193,63,10,149,97,64,226,161,53,52,52,112,30,139,229,243,81,157,
80,170,9,90,95,95,111,230,147,111,168,67,11,6,31,177,12,163,30,17,111,202,49,33,127,98,234,250,238,193,30,113,67,85,213,155,16,241,192,70,214,159,11,205,31,143,199,199,2,192,103,14,152,100,175,191,254,
250,65,7,113,163,209,104,13,28,236,92,167,19,78,56,97,19,34,78,76,155,132,205,68,116,189,97,24,207,135,66,161,190,198,233,115,18,218,98,151,27,9,153,224,212,208,126,95,32,193,218,175,133,53,245,230,58,
29,43,163,121,50,66,210,70,121,99,217,138,21,115,129,104,121,14,66,99,12,241,55,169,104,116,230,96,237,131,180,175,247,50,155,38,81,112,224,66,143,199,115,233,1,191,21,17,253,216,233,127,171,168,168,104,
176,251,181,0,96,51,17,61,144,74,165,62,179,116,233,210,106,198,216,249,138,162,60,213,15,100,6,224,184,94,196,57,255,85,111,10,73,111,8,124,198,97,38,63,231,54,127,36,18,169,2,155,82,99,89,214,147,189,
122,217,148,203,68,113,121,183,75,162,132,152,51,103,142,104,111,111,191,172,38,20,90,149,237,131,194,136,232,5,69,89,110,118,117,125,118,48,70,173,13,135,195,95,180,95,208,230,156,111,236,197,92,191,
34,77,102,155,86,175,94,253,84,6,247,203,201,14,211,237,103,138,162,44,238,239,182,232,186,62,2,17,237,103,208,54,167,175,69,245,198,202,57,214,126,215,147,136,244,117,235,214,185,190,13,20,12,6,207,63,
112,195,128,136,90,114,237,232,30,46,26,154,196,97,128,81,163,70,197,204,88,236,92,34,218,145,117,193,2,132,153,215,251,82,188,171,107,236,96,107,63,115,124,255,212,52,205,130,190,155,96,89,214,231,14,
196,219,23,66,220,158,101,119,244,211,14,77,167,40,55,50,124,62,159,211,205,179,172,183,101,41,138,226,60,214,244,70,33,230,38,34,126,213,214,222,94,111,48,13,8,161,185,57,167,228,246,128,235,225,134,
253,55,167,114,163,165,165,69,237,203,239,110,235,233,47,84,214,212,236,22,166,249,101,34,138,230,152,160,99,53,159,239,197,200,246,237,225,65,54,164,7,153,85,251,246,237,43,232,114,62,99,108,94,122,188,
150,170,170,154,205,124,159,96,255,39,145,72,180,21,201,42,58,217,97,110,190,208,95,101,17,209,155,110,243,166,125,138,179,211,249,214,45,91,182,172,215,196,58,32,132,86,63,122,244,100,23,61,50,56,163,
90,32,238,203,151,228,248,163,142,154,144,243,247,201,147,39,186,168,103,239,64,54,203,51,108,216,63,56,231,151,228,60,206,1,112,92,160,166,230,143,233,8,12,131,5,19,29,100,227,250,107,96,150,101,157,
137,136,103,17,81,87,60,30,255,207,92,138,176,253,159,119,222,121,103,95,113,166,230,255,147,16,17,197,182,108,217,210,151,15,153,156,234,32,52,215,166,171,215,235,253,246,129,77,22,33,196,141,246,56,
114,101,73,104,204,235,189,198,133,42,179,109,144,90,105,59,242,170,235,140,93,149,243,119,196,171,93,212,51,224,31,153,241,134,66,43,137,232,134,60,139,102,214,216,17,35,22,13,162,131,183,7,105,156,117,
117,117,213,110,50,117,116,116,248,25,99,15,165,227,165,93,227,140,151,230,192,65,254,228,163,143,62,186,88,47,4,123,36,153,183,122,27,215,174,171,171,43,4,0,83,28,228,253,94,1,121,255,35,77,130,15,171,
170,250,90,159,184,166,216,163,159,232,238,158,13,0,121,207,39,17,192,43,131,146,206,136,242,31,14,68,156,107,233,250,172,140,253,167,235,103,0,98,254,171,97,25,194,28,15,4,180,64,224,97,34,122,48,15,
169,205,185,115,222,188,7,6,201,136,114,135,118,49,213,77,166,154,154,154,95,34,226,100,34,106,204,97,106,30,192,65,196,82,93,93,61,161,16,1,45,203,250,138,16,226,79,185,210,36,147,201,41,136,104,63,89,
240,183,222,118,72,40,20,154,238,12,2,186,109,219,182,157,174,222,14,225,240,92,68,28,78,68,45,237,237,237,243,250,172,60,21,99,196,155,155,155,149,68,119,247,68,75,215,239,86,85,245,57,219,153,157,108,
254,159,20,79,165,126,51,24,249,76,164,82,75,92,168,254,30,64,124,41,101,24,63,72,68,34,227,55,108,216,160,37,186,187,39,88,186,222,168,34,190,136,136,90,158,254,35,145,74,45,46,85,27,151,173,88,113,51,
16,61,159,167,141,55,166,12,99,238,32,24,210,131,22,42,99,236,178,252,239,26,241,63,136,120,5,17,53,205,159,63,127,190,139,58,14,210,222,20,69,57,215,141,96,241,120,124,172,16,226,25,198,216,178,12,65,
27,15,130,170,170,103,56,100,252,123,31,76,215,99,156,207,134,13,27,150,215,239,155,62,160,60,143,136,182,198,227,241,115,235,234,234,226,125,54,163,243,190,142,138,28,111,44,189,32,127,161,250,253,223,
235,77,222,114,143,55,6,0,192,13,227,25,64,188,168,136,253,183,68,245,251,175,40,101,255,117,116,116,248,171,3,129,213,152,35,108,50,17,145,32,186,194,19,8,252,182,79,42,82,17,231,100,190,182,10,33,126,
141,136,215,216,218,36,132,16,103,171,170,250,114,166,62,169,169,169,121,4,17,175,36,162,231,54,110,220,120,145,27,179,78,8,177,28,17,207,179,213,177,207,52,205,147,124,62,95,70,183,76,79,79,79,117,32,
16,184,25,0,110,130,253,1,20,175,82,85,245,143,121,234,88,134,136,255,126,224,127,195,48,70,166,131,61,22,62,30,156,223,197,24,251,177,67,75,60,61,215,21,172,174,174,174,80,56,28,94,13,0,9,195,48,206,
9,6,131,253,226,67,47,249,177,13,2,88,223,25,141,206,131,65,140,120,52,250,93,34,250,176,72,100,182,205,232,234,186,174,212,109,172,173,173,53,204,120,252,92,251,71,58,50,188,201,145,33,62,145,208,245,
51,14,91,123,147,243,255,117,180,137,49,198,150,115,206,239,74,36,18,159,218,186,117,171,39,145,72,76,224,156,223,80,83,83,179,41,77,102,79,182,182,182,94,232,214,71,69,68,77,142,58,134,121,60,158,55,
57,231,223,212,117,189,118,199,142,29,190,116,29,23,11,33,150,4,2,129,29,136,120,7,0,108,74,165,82,211,243,145,89,58,92,215,25,182,250,182,247,150,204,210,249,15,57,111,168,40,74,99,182,176,96,186,174,
143,8,135,195,47,2,192,7,29,29,29,159,235,47,50,43,185,134,70,68,155,173,84,234,75,190,112,120,123,49,223,214,165,214,208,0,0,204,174,174,99,153,215,251,146,253,32,99,63,244,95,27,23,98,182,55,24,220,
92,234,254,251,164,157,145,200,212,244,151,180,2,57,228,238,17,169,212,76,79,56,252,110,177,100,46,150,134,150,214,110,30,65,196,239,184,24,31,147,136,110,83,20,229,167,133,186,108,102,206,156,185,18,
17,207,116,57,15,12,34,90,176,118,237,218,251,220,156,253,74,165,82,255,166,170,234,27,182,252,207,50,198,122,109,65,164,229,125,29,17,157,59,157,175,9,33,238,238,238,238,126,171,171,171,43,57,110,220,
184,35,85,85,61,31,17,47,39,162,255,206,246,93,132,195,83,67,35,122,54,222,221,61,163,47,100,118,56,193,83,93,189,193,76,36,78,1,128,23,251,169,200,23,146,134,113,106,95,200,172,40,237,12,135,215,113,
206,47,77,127,29,41,155,166,22,98,154,182,50,190,111,223,184,195,113,44,63,252,240,195,27,137,232,209,60,36,243,114,42,149,154,90,40,153,1,236,191,251,220,211,211,115,49,17,173,204,83,135,78,68,15,197,
227,241,73,138,162,44,112,123,144,85,81,148,179,28,229,180,244,165,63,26,26,26,184,97,24,95,38,162,215,29,227,60,75,81,148,63,85,87,87,247,76,154,52,41,169,105,218,59,136,56,58,26,141,206,42,6,153,13,
168,134,70,68,58,236,119,168,54,19,231,139,180,80,232,205,254,40,247,112,209,208,236,72,232,122,131,202,216,229,64,52,11,0,234,220,92,251,34,34,3,0,118,2,226,107,196,249,98,45,24,92,85,78,253,119,136,
22,160,235,215,51,198,30,204,211,166,141,177,72,228,179,161,49,99,186,250,91,230,98,106,104,54,63,209,44,198,216,119,0,96,6,0,140,132,253,71,116,94,225,156,255,90,211,180,119,250,67,30,203,178,206,99,
251,143,245,156,10,0,53,0,176,7,0,222,38,162,231,163,209,232,179,225,112,184,224,48,213,66,136,167,1,96,36,17,189,74,68,171,118,239,222,253,150,219,16,63,249,52,181,211,79,63,253,107,136,248,53,0,152,
10,251,143,159,236,1,128,86,34,90,161,235,250,211,206,48,73,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,
18,217,241,47,85,158,56,123,125,231,149,184,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* XVerbAudioProcessorEditor::brokeVerb_png = (const char*) resource_XVerbAudioProcessorEditor_brokeVerb_png;
const int XVerbAudioProcessorEditor::brokeVerb_pngSize = 5778;


//[EndFile] You can add extra defines here...
//[/EndFile]
