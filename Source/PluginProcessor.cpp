/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
XVerbAudioProcessor::XVerbAudioProcessor()
{
    UserParams[MasterBypass] = 0.0f;
    UserParams[Mix] = 0.5f;
    UserParams[Decay] = 3.0f;
    UserParams[CombDelay1] = 29.7f;
    UserParams[CombDelay2] = 37.1f;
    UserParams[CombDelay3] = 41.1f;
    UserParams[CombDelay4] = 43.7f;
    UserParams[AllpassDelay1] = 5.0f;
    UserParams[AllpassGain1] = 0.5f;
    UserParams[AllpassDelay2] = 1.7f;
    UserParams[AllpassGain2] = 0.5f;
    UserParams[LowpassCutoff] = 2300.0f;
    UIUpdateFlag = true;
    //std::cout << "XVerb constructor called" << std::endl;
}

XVerbAudioProcessor::~XVerbAudioProcessor()
{
    //std::cout << "XVerb destructor called" << std::endl;
}

//==============================================================================
const String XVerbAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

int XVerbAudioProcessor::getNumParameters()
{
    return NumParams;
}

float XVerbAudioProcessor::getParameter (int index)
{
    switch (index) {
        case MasterBypass:
            return UserParams[MasterBypass];
        case Mix:
            return UserParams[Mix];
        case Decay:
            return UserParams[Decay];
        case CombDelay1:
            return UserParams[CombDelay1];
        case CombDelay2:
            return UserParams[CombDelay2];
        case CombDelay3:
            return UserParams[CombDelay3];
        case CombDelay4:
            return UserParams[CombDelay4];
        case AllpassDelay1:
            return UserParams[AllpassDelay1];
        case AllpassGain1:
            return UserParams[AllpassGain1];
        case AllpassDelay2:
            return UserParams[AllpassDelay2];
        case AllpassGain2:
            return UserParams[AllpassGain2];
        case LowpassCutoff:
            return UserParams[LowpassCutoff];
        default:
            return 0.0f;
    }
}

void XVerbAudioProcessor::setParameter (int index, float newValue)
{
    switch (index) {
        case MasterBypass:
            UserParams[MasterBypass] = newValue;
            break;
        case Mix:
            UserParams[Mix] = newValue;
            break;
        case Decay:
            UserParams[Decay] = newValue;
            schroeder.setDecayFactor(UserParams[Decay]);
            break;
        case CombDelay1:
            UserParams[CombDelay1] = newValue;
            schroeder.setCombDelay(0, getSampleRate(), UserParams[CombDelay1]);
            break;
        case CombDelay2:
            UserParams[CombDelay2] = newValue;
            schroeder.setCombDelay(1, getSampleRate(), UserParams[CombDelay2]);
            break;
        case CombDelay3:
            UserParams[CombDelay3] = newValue;
            schroeder.setCombDelay(2, getSampleRate(), UserParams[CombDelay3]);
            break;
        case CombDelay4:
            UserParams[CombDelay4] = newValue;
            schroeder.setCombDelay(3, getSampleRate(), UserParams[CombDelay4]);
            break;
        case AllpassDelay1:
            UserParams[AllpassDelay1] = newValue;
            schroeder.setAllpassDelay(0, getSampleRate(), UserParams[AllpassDelay1]);
            break;
        case AllpassGain1:
            UserParams[AllpassGain1] = newValue;
            schroeder.setAllpassGain(0, UserParams[AllpassGain1]);
            break;
        case AllpassDelay2:
            UserParams[AllpassDelay2] = newValue;
            schroeder.setAllpassDelay(1, getSampleRate(), UserParams[AllpassDelay2]);
            break;
        case AllpassGain2:
            UserParams[AllpassGain2] = newValue;
            schroeder.setAllpassGain(1, UserParams[AllpassGain2]);
            break;
        case LowpassCutoff:
            UserParams[LowpassCutoff] = newValue;
            schroeder.setLowpassCutoff(0, getSampleRate(), UserParams[LowpassCutoff]);
            break;
        default:
            break;
    }
    //std::cout << "updating param " << index << ": " << newValue << std::endl;
}

const String XVerbAudioProcessor::getParameterName (int index)
{
    switch (index) {
        case MasterBypass:
            return "MasterBypass";
        case Mix:
            return "Wet Signal";
        case Decay:
            return "Decay";
        case CombDelay1:
            return "Comb Delay 1";
        case CombDelay2:
            return "Comb Delay 2";
        case CombDelay3:
            return "Comb Delay 3";
        case CombDelay4:
            return "Comb Delay 4";
        case AllpassDelay1:
            return "Allpass Delay 1";
        case AllpassGain1:
            return "Allpass Gain 1";
        case AllpassDelay2:
            return "Allpass Delay 2";
        case AllpassGain2:
            return "Allpass Gain 2";
        case LowpassCutoff:
            return "Lowpass Cutoff";
        default:
            return String::empty;
    }
}

const String XVerbAudioProcessor::getParameterText (int index)
{
    if(index >= 0 && index < NumParams){
        return String(UserParams[index]);
    }
    else{
        return String::empty;
    }
}

const String XVerbAudioProcessor::getInputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

const String XVerbAudioProcessor::getOutputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

bool XVerbAudioProcessor::isInputChannelStereoPair (int index) const
{
    return true;
}

bool XVerbAudioProcessor::isOutputChannelStereoPair (int index) const
{
    return true;
}

bool XVerbAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool XVerbAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool XVerbAudioProcessor::silenceInProducesSilenceOut() const
{
    return false;
}

double XVerbAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int XVerbAudioProcessor::getNumPrograms()
{
    return 0;
}

int XVerbAudioProcessor::getCurrentProgram()
{
    return 0;
}

void XVerbAudioProcessor::setCurrentProgram (int index)
{
}

const String XVerbAudioProcessor::getProgramName (int index)
{
    return String::empty;
}

void XVerbAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void XVerbAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    //check for change in sample rate!!!
    // initialisation that you need..
}

void XVerbAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

void XVerbAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    int numSamples = buffer.getNumSamples(); //THIS IS NUM SAMPLES PER CHANNEL
    float mix = getParameter(Mix);
    /*for (int channel = 0; channel < getNumInputChannels(); ++channel)
    {
        //CROSSTALK
        for (int sampCount = 0; sampCount < numSamples; sampCount++) {
            //CREATE TEMP ARRAY TO PREVENT UNINTENTIONAL FEEDBACK
            //leftChannelSampleData += rightChannelSampleData * crossTalkAmount;
            //rightChannelSampleData += leftChannelSampleData * crossTalkAmount;
        }
    }*/
    
    // This is the place where you'd normally do the guts of your plugin's
    // audio processing...
    if(UserParams[MasterBypass]){
        for (int i = 0; i < getNumOutputChannels(); ++i)
        {
            buffer.clear (i, 0, buffer.getNumSamples());
        }
    }
    else{
        for(int channel = 0; channel < getNumInputChannels(); channel++){
            float* channelData = buffer.getSampleData(channel);
            for(int i = 0; i < numSamples; i++){
                float in = channelData[i], out = 0.0f;
                //channelData[i] = 0.0f;
                out = mix * schroeder.next(in) + (1.0f - mix) * in;
                channelData[i] = out;
                //channelData[sampCount] = somethingSomething;
            }
        }
        // In case we have more outputs than inputs, we'll clear any output
        // channels that didn't contain input data, (because these aren't
        // guaranteed to be empty - they may contain garbage).
        for (int i = getNumInputChannels(); i < getNumOutputChannels(); ++i)
        {
            buffer.clear (i, 0, buffer.getNumSamples());
        }
    }
}

//==============================================================================
bool XVerbAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* XVerbAudioProcessor::createEditor()
{
    return new XVerbAudioProcessorEditor (this);
}

//==============================================================================
void XVerbAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    XmlElement root("Root");
    XmlElement *el;
    el = root.createNewChildElement("MasterBypass");
    el->addTextElement(String(UserParams[MasterBypass]));
    el = root.createNewChildElement("Mix");
    el->addTextElement(String(UserParams[Mix]));
    el = root.createNewChildElement("Decay");
    el->addTextElement(String(UserParams[Decay]));
    el = root.createNewChildElement("CombDelay1");
    el->addTextElement(String(UserParams[CombDelay1]));
    el = root.createNewChildElement("CombDelay2");
    el->addTextElement(String(UserParams[CombDelay2]));
    el = root.createNewChildElement("CombDelay3");
    el->addTextElement(String(UserParams[CombDelay3]));
    el = root.createNewChildElement("CombDelay4");
    el->addTextElement(String(UserParams[CombDelay4]));
    el = root.createNewChildElement("AllpassDelay1");
    el->addTextElement(String(UserParams[AllpassDelay1]));
    el = root.createNewChildElement("AllpassGain1");
    el->addTextElement(String(UserParams[AllpassGain1]));
    el = root.createNewChildElement("AllpassDelay2");
    el->addTextElement(String(UserParams[AllpassDelay2]));
    el = root.createNewChildElement("AllpassGain2");
    el->addTextElement(String(UserParams[AllpassGain2]));
    el = root.createNewChildElement("LowpassCutoff");
    el->addTextElement(String(UserParams[LowpassCutoff]));
    copyXmlToBinary(root, destData);
}

void XVerbAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    XmlElement *pRoot = getXmlFromBinary(data, sizeInBytes);
    if(pRoot != NULL){
        forEachXmlChildElement((*pRoot), pChild){
            if(pChild->hasTagName("MasterBypass")){
                String text = pChild->getAllSubText();
                setParameter(MasterBypass, text.getFloatValue());
            }
            if(pChild->hasTagName("Mix")){
                String text = pChild->getAllSubText();
                setParameter(Mix, text.getFloatValue());
            }
            if(pChild->hasTagName("Decay")){
                String text = pChild->getAllSubText();
                setParameter(Decay, text.getFloatValue());
            }
            if(pChild->hasTagName("CombDelay1")){
                String text = pChild->getAllSubText();
                setParameter(CombDelay1, text.getFloatValue());
            }
            if(pChild->hasTagName("CombDelay2")){
                String text = pChild->getAllSubText();
                setParameter(CombDelay2, text.getFloatValue());
            }
            if(pChild->hasTagName("CombDelay3")){
                String text = pChild->getAllSubText();
                setParameter(CombDelay3, text.getFloatValue());
            }
            if(pChild->hasTagName("CombDelay4")){
                String text = pChild->getAllSubText();
                setParameter(CombDelay4, text.getFloatValue());
            }
            if(pChild->hasTagName("AllpassDelay1")){
                String text = pChild->getAllSubText();
                setParameter(AllpassDelay1, text.getFloatValue());
            }
            if(pChild->hasTagName("AllpassGain1")){
                String text = pChild->getAllSubText();
                setParameter(AllpassGain1, text.getFloatValue());
            }
            if(pChild->hasTagName("AllpassDelay2")){
                String text = pChild->getAllSubText();
                setParameter(AllpassDelay2, text.getFloatValue());
            }
            if(pChild->hasTagName("AllpassGain2")){
                String text = pChild->getAllSubText();
                setParameter(AllpassGain2, text.getFloatValue());
            }
            if(pChild->hasTagName("LowpassCutoff")){
                String text = pChild->getAllSubText();
                setParameter(LowpassCutoff, text.getFloatValue());
            }
        }
        delete pRoot;
    }
    UIUpdateFlag = true; //Request UI update
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new XVerbAudioProcessor();
}
