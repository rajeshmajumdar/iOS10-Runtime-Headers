/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherWindSpeedFormatter : NSFormatter {
    NSDictionary * _directionSubstringAttributes;
    NSLocale * _locale;
    WeatherPreferences * _preferences;
}

@property (retain) NSDictionary *directionSubstringAttributes;
@property (retain) NSLocale *locale;
@property (retain) WeatherPreferences *preferences;

+ (id)convenienceFormatter;

- (void).cxx_destruct;
- (id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)directionSubstringAttributes;
- (id)fallbackStringForWindSpeed:(float)arg1;
- (id)fallbackUnitString;
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)locale;
- (id)preferences;
- (void)setDirectionSubstringAttributes:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setPreferences:(id)arg1;
- (float)speedByConvertingToUserUnit:(float)arg1;
- (id)speedStringByConvertingToUserUnits:(float)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForWindDirection:(float)arg1;
- (id)stringForWindSpeed:(float)arg1;
- (id)templateStringForSpeed:(float)arg1 direction:(float)arg2;
- (int)windSpeedUnit;

@end
