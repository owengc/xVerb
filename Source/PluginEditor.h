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

#ifndef __JUCE_HEADER_210522A4D6428052__
#define __JUCE_HEADER_210522A4D6428052__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class XVerbAudioProcessorEditor  : public AudioProcessorEditor,
                                   public Timer,
                                   public SliderListener,
                                   public ButtonListener
{
public:
    //==============================================================================
    XVerbAudioProcessorEditor (XVerbAudioProcessor* ownerFilter);
    ~XVerbAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void timerCallback();
    XVerbAudioProcessor* getProcessor() const{
        return static_cast<XVerbAudioProcessor*>(getAudioProcessor());
    }
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);
    void visibilityChanged();

    // Binary resources:
    static const char* brokeVerb_png;
    static const int brokeVerb_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> DecayLabel;
    ScopedPointer<Slider> DecayKnob;
    ScopedPointer<Label> CombDelayLabel1;
    ScopedPointer<Slider> CombDelayKnob1;
    ScopedPointer<Label> CombDelayLabel2;
    ScopedPointer<Slider> CombDelayKnob2;
    ScopedPointer<Label> CombDelayLabel3;
    ScopedPointer<Slider> CombDelayKnob3;
    ScopedPointer<Label> CombDelayLabel4;
    ScopedPointer<Slider> CombDelayKnob4;
    ScopedPointer<Label> AllpassDelayLabel1;
    ScopedPointer<Slider> AllpassDelayKnob1;
    ScopedPointer<Label> AllpassGainLabel1;
    ScopedPointer<Slider> AllpassGainKnob1;
    ScopedPointer<Label> MixLabel;
    ScopedPointer<Slider> MixKnob;
    ScopedPointer<Label> AllpassDelayLabel2;
    ScopedPointer<Slider> AllpassDelayKnob2;
    ScopedPointer<Label> AllpassGainLabel3;
    ScopedPointer<Slider> AllpassGainKnob2;
    ScopedPointer<TextButton> BypassButton;
    Path internalPath1;
    Path internalPath2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (XVerbAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_210522A4D6428052__
