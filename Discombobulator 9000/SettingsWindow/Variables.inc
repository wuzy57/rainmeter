[Variables]


; Shorthand bangs and abbreviations
A=!ActivateConfig
S=!SetOptionGroup
SO=!SetOption
SV=!SetVariable
U=!UpdateMeasureGroup
UM=!UpdateMeasure
W=!WriteKeyValue

MA=MatchActions
WV=WriteVariableRounded
V=Variables


; Default audio settings
DefAverageSize=3
DefLoudnessEqualization=1
DefFFTSize=10240
DefFFTOverlap=(#**FFTSize**#-512)
DefFFTAttack=45
DefFFTDecay=455
DefFreqMin=20
DefFreqMax=20000
DefSensitivity=18


; Substitute patterns based on the active type of Setting

StateSubstitute="1":"Colors","2":"Display","3":"Audio","4":"Extras","5":""
SetHeaderTabNames=[#SO# HeaderTab1 Text "Colors"][#SO# HeaderTab2 Text "Display"][#SO# HeaderTab3 Text "Audio"][#SO# HeaderTab4 Text "Extras"][#SO# HeaderTab5 Text " "]

; Name of variable written to file
Var///1="Colors":"-1","Display":"Bands","Audio":"-1","Extras":"-1"
Var///2="Colors":"-1","Display":"RoundlineLength","Audio":"Sensitivity","Extras":"-1"
Var///3="Colors":"-1","Display":"RoundlineGap","Audio":"FFTAttack","Extras":"-1"
Var///4="Colors":"-1","Display":"CenterOffset","Audio":"FFTDecay","Extras":"-1"
Var///5="Colors":"-1","Display":"-1","Audio":"AverageSize","Extras":"-1"
Var///6="Colors":"-1","Display":"-1","Audio":"FreqMin","Extras":"-1"
Var///7="Colors":"-1","Display":"-1","Audio":"FreqMax","Extras":"-1"
Var///8="Colors":"hBlendingMultiplier","Display":"DecayThreshold","Audio":"-1","Extras":"-1"
Var///9="Colors":"vBlendingMultiplier","Display":"DecaySustain","Audio":"-1","Extras":"-1"
Var///10="Colors":"TransitionTime","Display":"DecayDuration","Audio":"-1","Extras":"-1"
Var///11="Colors":"-1","Display":"-1","Audio":"-1","Extras":"-1"
Var///12="Colors":"-1","Display":"-1","Audio":"-1","Extras":"-1"
Var///13="Colors":"-1","Display":"-1","Audio":"-1","Extras":"-1"

; Calc measure MaxValue for Bar meters
CalcMV///1="Colors":"-1","Display":"128","Audio":"-1","Extras":"-1"
CalcMV///2="Colors":"-1","Display":"48","Audio":"60","Extras":"-1"
CalcMV///3="Colors":"-1","Display":"24","Audio":"500","Extras":"-1"
CalcMV///4="Colors":"-1","Display":"500","Audio":"500","Extras":"-1"
CalcMV///5="Colors":"-1","Display":"-1","Audio":"8","Extras":"-1"
CalcMV///6="Colors":"-1","Display":"-1","Audio":"320","Extras":"-1"
CalcMV///7="Colors":"-1","Display":"-1","Audio":"24000","Extras":"-1"
CalcMV///8="Colors":"1","Display":"100","Audio":"-1","Extras":"-1"
CalcMV///9="Colors":"2","Display":"100","Audio":"-1","Extras":"-1"
CalcMV///10="Colors":"12","Display":"1000","Audio":"-1","Extras":"-1"
CalcMV///11="Colors":"-1","Display":"-1","Audio":"-1","Extras":"-1"
CalcMV///12="Colors":"-1","Display":"-1","Audio":"-1","Extras":"-1"
CalcMV///13="Colors":"-1","Display":"-1","Audio":"-1","Extras":"-1"

; LeftMouseDownAction for String meters
StringLMDA///1="Colors":'[#W# #V# Colors "Single" "#@##V#.inc"][#W# #V# ColorsPlugin "None" "#@##V#.inc"]',"Audio":'[#W# #V# LoudnessEqualization "(#LoudnessEqualization# = 0 ? 1 : 0)" "#@##V#.inc"]',"Extras":'[#A# "#ROOTCONFIG#\Clone"]'
StringLMDA///2="Colors":'[#W# #V# Colors "Random" "#@##V#.inc"][#W# #V# ColorsPlugin "None" "#@##V#.inc"]',"Extras":'[#A# "#ROOTCONFIG#\Clone_2"]'
StringLMDA///3="Colors":'[#W# #V# Colors "Custom" "#@##V#.inc"][#W# #V# ColorsPlugin "None" "#@##V#.inc"]'
StringLMDA///4="Colors":'[#W# #V# Colors "Individual" "#@##V#.inc"][#W# #V# ColorsPlugin "None" "#@##V#.inc"]'
StringLMDA///5="Colors":'[#W# #V# Colors "IndivRand" "#@##V#.inc"][#W# #V# ColorsPlugin "None" "#@##V#.inc"]'
StringLMDA///6="Colors":'[#W# #V# Colors "Wallpaper" "#@##V#.inc"][#W# #V# ColorsPlugin "Chameleon" "#@##V#.inc"]',"Display":'[#W# #V# Invert "(#Invert# = 0 ? 1 : 0)" "#@##V#.inc"][#W# #V# Invert "(#Invert# = 0 ? 1 : 0)" "#ConfigPath#"]'
StringLMDA///7="Colors":'[#W# #V# Colors "Taskbar" "#@##V#.inc"][#W# #V# ColorsPlugin "SysColor" "#@##V#.inc"]',"Display":'[#W# #V# DecayEffect "(#DecayEffect# = 0 ? 1 : 0)" "#@##V#.inc"]'
StringLMDA///8="Audio":'[#A# "#ROOTCONFIG#\SettingsMisc" "AudioFFTSize.ini"]'
StringLMDA///9="Audio":'[#A# "#ROOTCONFIG#\SettingsMisc" "AudioChannel.ini"]'
StringLMDA///10="Audio":'[#A# "#ROOTCONFIG#\SettingsMisc" "AudioMusicPlayer.ini"]'
StringLMDA///11="Audio":'[#W# #V# Port #*PortVariable*# "#@##V#.inc"][#W# #V# Port #*PortVariable*# "#ConfigPath#"]'
StringLMDA///12="Audio":'[#A# "#ROOTCONFIG#\SettingsMisc" "AudioDeviceList.ini"]'
StringLMDA///13="Audio":'[#W# #V# AverageSize #DefAverageSize# "#@##V#.inc"][#W# #V# LoudnessEqualization #DefLoudnessEqualization# "#@##V#.inc"][#W# #V# FFTSize #DefFFTSize# "#@##V#.inc"][#W# #V# FFTOverlap """"#DefFFTOverlap#"""" "#@##V#.inc"][#W# #V# FFTAttack #DefFFTAttack# "#@##V#.inc"][#W# #V# FFTDecay #DefFFTDecay# "#@##V#.inc"][#W# #V# FreqMin #DefFreqMin# "#@##V#.inc"][#W# #V# FreqMax #DefFreqMax# "#@##V#.inc"][#W# #V# Sensitivity #DefSensitivity# "#@##V#.inc"]'

; Display text
Text///1="Colors":"#Colors#  Single color","Display":"Number of rings: #Bands#","Audio":"#LoudnessEqualization#  Loudness equalization","Extras":"Show duplicate skin...","Single  Single color":"◉  Single color","#Colors#  Single color":"○  Single color","1  Loudness equalization":"☑  Loudness equalization","#LoudnessEqualization#  Loudness equalization":"☐  Loudness equalization"
Text///2="Colors":"#Colors#  Random colors","Display":"Ring length: #RoundlineLength# px","Audio":"Sensitivity: #Sensitivity# dB","Extras":"Show duplicate skin (2)...","Random  Random colors":"◉  Random colors","#Colors#  Random colors":"○  Random colors"
Text///3="Colors":"#Colors#  Custom colors","Display":"Ring spacing: #RoundlineGap# px","Audio":"Attack speed: #FFTAttack# ms","Extras":"","Custom  Custom colors":"◉  Custom colors","#Colors#  Custom colors":"○  Custom colors"
Text///4="Colors":"#Colors#  Individual colors","Display":"Center offset: #CenterOffset# px","Audio":"Decay speed: #FFTDecay# ms","Extras":"","Individual  Individual colors":"◉  Individual colors - Click to edit...","#Colors#  Individual colors":"○  Individual colors"
Text///5="Colors":"#Colors#  Individual random colors","Display":"","Audio":"Smoothness: #AverageSize# past values","Extras":"","IndivRand  Individual random colors":"◉  Individual random colors","#Colors#  Individual random colors":"○  Individual random colors","1 past values":"1 past value"
Text///6="Colors":"#Colors#  Wallpaper colors","Display":"#Invert#  Invert spectrum","Audio":"Min frequency: #FreqMin# Hz","Extras":"","Wallpaper  Wallpaper colors":"◉  Wallpaper colors - #WallpaperColorSource#  ▼","#Colors#  Wallpaper colors":"○  Wallpaper colors","1  Invert spectrum":"☑  Invert spectrum","#Invert#  Invert spectrum":"☐  Invert spectrum"
Text///7="Colors":"#Colors#  Taskbar color","Display":"#DecayEffect#  Fountain effects","Audio":"Max frequency: #FreqMax# Hz","Extras":"","Taskbar  Taskbar color":"◉  Taskbar color","#Colors#  Taskbar color":"○  Taskbar color","1  Fountain effects":"☑  Fountain effects","#DecayEffect#  Fountain effects":"☐  Fountain effects"
Text///8="Colors":"Horizontal blending: #hBlendingMultiplier#x","Display":"  Threshold: #DecayThreshold#","Audio":"Resolution: #FFTSize# points  ▼","Extras":""
Text///9="Colors":"Vertical blending: #vBlendingMultiplier#x","Display":"  Sustain: #DecaySustain# ms","Audio":"Channel: #Channel#  ▼","Extras":""
Text///10="Colors":"Transition speed: #TransitionTime# seconds","Display":"  Duration: #DecayDuration# ms","Audio":"Music player: #MusicPlayer#  ▼","Extras":""
Text///11="Colors":"","Display":"","Audio":"Switch to #Port#...","Extras":"","Output":"input","Input":"output"
Text///12="Colors":"","Display":"","Audio":"Set audio device...","Extras":""
Text///13="Colors":"","Display":"","Audio":"Reset audio settings...","Extras":""

; Help text
HelpText///1="Colors":"Show one color.","Display":"Number of audio bands. Higher values increases precision.","Audio":"Increases visibility for quiet audio sources when applicable.","Extras":"Show a skin clone with separate audio source options."
HelpText///2="Colors":"Show random blended colors.","Display":"Size of one ring.","Audio":"Spectrum visibility based on sound level threshold.","Extras":"Show another skin clone with separate audio source options."
HelpText///3="Colors":"Show custom blended colors.","Display":"Space between the rings.","Audio":"Determines how fast the rings respond to increased sound levels.","Extras":" "
HelpText///4="Colors":"Show custom colors for each ring.","Display":"Distance from the center of the eye.","Audio":"Determines how fast the rings respond to decreased sound levels","Extras":" "
HelpText///5="Colors":"Show random colors for each ring.","Display":" ","Audio":"Average sound levels over time to provide continuity.","Extras":" "
HelpText///6="Colors":"Sync with your wallpaper colors.","Display":"Reverses the order of the rings.","Audio":"Threshold for lowest pitched sounds.","Extras":" "
HelpText///7="Colors":"Sync with your taskbar color.","Display":"Enables fading effects.","Audio":"Threshold for highest pitched sounds.","Extras":" "
HelpText///8="Colors":"Color blending across the spectrum. (Left to right)","Display":"Fading in threshold.","Audio":"Spectrum accuracy. Note: Higher values will increase delay.","Extras":" "
HelpText///9="Colors":"Color blending based on sound level. (Top to bottom)","Display":"Determines how long before the rings begin to fade out.","Audio":"Speaker source.","Extras":" "
HelpText///10="Colors":"Determines how fast the colors change or synchronize.","Display":"Determines how fast the rings fade out.","Audio":"Note: When the player is open, all sounds will be displayed.","Extras":" "
HelpText///11="Colors":" ","Display":" ","Audio":"Switch between your microphone or speakers.","Extras":" "
HelpText///12="Colors":" ","Display":" ","Audio":"Select another audio device.","Extras":" "
HelpText///13="Colors":" ","Display":" ","Audio":"Reset audio settings to the default values.","Extras":" "


; Rounding options based on the active type of Setting and Section
RoundColors=[#SO# #WV# IfCondition "(#***Section***# = 8) || (#***Section***# = 9) || (#***Section***# = 10)"]

RoundDisplayBands=[#SO# #WV# IfCondition2 "(#***Section***# = 1)"][#SO# #WV# IfTrueAction2 """[#SO# WriteVariable OnChangeAction """[#W# #V# [///#****Section****#] [****WriteVariable****] "#@##V#.inc"][#A# "#ROOTCONFIG#\GenerateBands"]"""]"""]
RoundDisplayDecayDuration=[#SO# #WV# IfCondition3 "(#***Section***# = 10)"][#SO# #WV# IfTrueAction3 """[#SO# WriteVariable Formula "Round([****#WV#****] / 10) * 10"]"""]
RoundDisplayFinal=[#SO# #WV# IfCondition4 "(#WV# >= 0)"][#SO# #WV# IfTrueAction4 """[#UM# WriteVariable]"""]

RoundDisplay=#RoundDisplayBands##RoundDisplayDecayDuration##RoundDisplayFinal#


; Extra bangs to modify the Settings window based on the active type of Setting

ColorsBangs=[#SO# "1" Group Colors][#SO# "2" Group Colors][#SO# "3" Group Colors][#SO# "4" Group Colors][!UpdateMeterGroup Bars][#S# Colors LeftMouseUpAction """#ColorsBangsLMUA#"""]#SetColorsOptionsByVar##SetColorsOptionsByVar2##RoundColors#
ColorsBangsLMUA=[#W# #V# WriteVariable "PaletteColor#**CURRENTSECTION**#" "#@##V#.inc"][#A# "#ROOTCONFIG#\RGBCode"][!Move "(#*CURRENTCONFIGX*# + [#**CURRENTSECTION**#:X])" "(#*CURRENTCONFIGY*# + [#**CURRENTSECTION**#:Y] + 24)" "#ROOTCONFIG#\RGBCode"]


ColorsBangsIfMatchSingle=[#SO# #MA# IfMatch "Single"][#SO# #MA# IfMatchAction """#ColorsBangsSingle#"""]
ColorsBangsIfMatchRandom=[#SO# #MA# IfMatch2 "Random"][#SO# #MA# IfMatchAction2 """#ColorsBangsRandom#"""]
ColorsBangsIfMatchCustom=[#SO# #MA# IfMatch3 "Custom"][#SO# #MA# IfMatchAction3 """#ColorsBangsCustom#"""]
ColorsBangsIfMatchIndividual=[#SO# #MA# IfMatch4 "Individual"][#SO# #MA# IfMatchAction4 """#ColorsBangsIndividual#"""]
ColorsBangsIfMatchIndivRand=[#SO# #MA# IfMatch "IndivRand"][#SO# #MA# IfMatchAction """#ColorsBangsIndivRand#"""]
ColorsBangsIfMatchWallpaper=[#SO# #MA# IfMatch2 "Wallpaper"][#SO# #MA# IfMatchAction2 """#ColorsBangsWallpaper#"""]
ColorsBangsIfMatchTaskbar=[#SO# #MA# IfMatch3 "Taskbar"][#SO# #MA# IfMatchAction3 """#ColorsBangsTaskbar#"""]

SetColorsOptionsByVar=[#SO# #MA# String "#Colors#"][#UM# #MA#]#ColorsBangsIfMatchSingle##ColorsBangsIfMatchRandom##ColorsBangsIfMatchCustom##ColorsBangsIfMatchIndividual#[#UM# #MA#]
SetColorsOptionsByVar2=#ColorsBangsIfMatchIndivRand##ColorsBangsIfMatchWallpaper##ColorsBangsIfMatchTaskbar#[#UM# #MA#]

ColorsBangsSingle=[#S# String FontColor 180,180,180][#SO# //1 FontColor 0,0,0][#SO# "1" X 16R][#SO# "1" Y 2r][#SO# "1" W 16][#SO# "1" H 16][#SO# "1" SolidColor #PaletteColor1#]
ColorsBangsRandom=[]
ColorsBangsCustom=[#SO# //10 FontColor 180,180,180][#S# Colors X 155][#S# Colors Y 2r][#S# Colors W 16][#S# Colors H 16][#SO# "1" SolidColor #PaletteColor1#][#SO# "2" SolidColor #PaletteColor2#][#SO# "3" SolidColor #PaletteColor3#][#SO# "4" SolidColor #PaletteColor4#]#SetCustomColorsHelpText#
ColorsBangsIndividual=[#SO# //8 FontColor 180,180,180][#SO# //10 FontColor 180,180,180][#SO# //4 LeftMouseDownAction """["#@#IndividualRingColors.inc"]"""]
ColorsBangsIndivRand=[#SO# //8 FontColor 180,180,180]
ColorsBangsWallpaper=[#SO# //6 LeftMouseDownAction """[#A# "#ROOTCONFIG#\SettingsMisc" "DisplayWallpaperColor.ini"]"""]
ColorsBangsTaskbar=[#SO# //8 FontColor 180,180,180]
SetCustomColorsHelpText=[#SO# "1" MouseOverAction """[#SO# HelpText Text "Bottom left color."][!UpdateMeter HelpText][!Redraw]"""][#SO# "2" MouseOverAction """[#SO# HelpText Text "Bottom right color."][!UpdateMeter HelpText][!Redraw]"""][#SO# "3" MouseOverAction """[#SO# HelpText Text "Top left color."][!UpdateMeter HelpText][!Redraw]"""][#SO# "4" MouseOverAction """[#SO# HelpText Text "Top right color."][!UpdateMeter HelpText][!Redraw]"""]

DisplayBangs=#RoundDisplay#

AudioBangs=[#SO# #MA# String "#Port#"][#UM# #MA#][#SO# #MA# IfMatch "Output"][#SO# #MA# IfMatchAction """[#SV# PortVariable "Input"]"""][#SO# #MA# IfMatch2 "Input"][#SO# #MA# IfMatchAction2 """[#SV# PortVariable "Output"]"""][#UM# #MA#]

ExtrasBangs=

IfMatchColors=[#SO# #MA# IfMatch "Colors"][#SO# #MA# IfMatchAction """#ColorsBangs#"""]
IfMatchDisplay=[#SO# #MA# IfMatch2 "Display"][#SO# #MA# IfMatchAction2 """#DisplayBangs#"""]
IfMatchAudio=[#SO# #MA# IfMatch3 "Audio"][#SO# #MA# IfMatchAction3 """#AudioBangs#"""]
IfMatchExtras=[#SO# #MA# IfMatch4 "Extras"][#SO# #MA# IfMatchAction4 """#ExtrasBangs#"""]
SetOptionsByState=[#SO# #MA# String [StateReference]][#UM# #MA#]#IfMatchColors##IfMatchDisplay##IfMatchAudio##IfMatchExtras#[#UM# #MA#]
