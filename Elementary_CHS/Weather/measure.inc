[WeatherCore]
Measure=Plugin
Plugin=CNWeather
DynamicVariables=1
WeatherType=Today
ItemName=temp_curr
DefaultValue=NA
CityCode=#City#
AppKey=#AppKey#
Sign=#Sign#

;=============================��������
[MeasureCityName]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=citynm
DefaultValue=NA
;===========�����е���
[MeasureTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=today
ItemName=temp_high

DefaultValue=NA
;===========����¶ȡ�
[MeasureTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=today
ItemName=temp_low
DefaultValue=NA
;===========����¶ȡ�

[MeasureCurrIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=weatid
DefaultValue=NA
DynamicVariables=1
;====������id   �˴�������ȡ����ͼ��

[Measuredays]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=0
DefaultValue=NA
SubStitute="-":"."

;=============================����
[Measuredays1]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=1
DefaultValue=NA
SubStitute="-":"."

;=================����
[MeasureTodayIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=1
DefaultValue=NA
;==========����id
[MeasureTodayTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=1
DefaultValue=NA
;===========����¶ȡ�

[MeasureTodayTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=1
DefaultValue=NA

;===========����¶ȡ�

;=============================����
[Measuredays2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=2
DefaultValue=NA
SubStitute="-":"."
;=================����
[Measure3Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=2
DefaultValue=NA
;==========����id
[MeasureTodayTempHigh2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=2
DefaultValue=NA
;===========����¶ȡ�

[MeasureTodayTempLow2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=2
DefaultValue=NA

;===========����¶ȡ�
;=============================������
[Measuredays3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=3
DefaultValue=NA
SubStitute="-":"."
;=================����
[Measure4Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=3
DefaultValue=NA

;==========����id
[MeasureTodayTempHigh3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=3
DefaultValue=NA
;===========����¶ȡ�

[MeasureTodayTempLow3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=3
DefaultValue=NA

;===========����¶ȡ�




;==================================================================
[Measuredays4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=4
DefaultValue=NA
SubStitute="-":"."

[Measure5Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=4
DefaultValue=NA

;==========����id
[MeasureTodayTempHigh4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=4
DefaultValue=NA
;===========����¶ȡ�

[MeasureTodayTempLow4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=4
DefaultValue=NA

;===========����¶ȡ�


