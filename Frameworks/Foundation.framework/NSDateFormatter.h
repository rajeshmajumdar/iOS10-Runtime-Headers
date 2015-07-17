/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver> {
    NSMutableDictionary * _attributes;
    int  _cacheGeneration;
    unsigned int  _counter;
    struct __CFDateFormatter { } * _formatter;
    NSObject<OS_dispatch_semaphore> * _lock;
}

@property (copy) NSString *AMSymbol;
@property (copy) NSString *PMSymbol;
@property (copy) NSCalendar *calendar;
@property (copy) NSString *dateFormat;
@property unsigned int dateStyle;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDate *defaultDate;
@property (readonly, copy) NSString *description;
@property BOOL doesRelativeDateFormatting;
@property (copy) NSArray *eraSymbols;
@property unsigned int formatterBehavior;
@property int formattingContext;
@property BOOL generatesCalendarDates;
@property (copy) NSDate *gregorianStartDate;
@property (readonly) unsigned int hash;
@property (getter=isLenient) BOOL lenient;
@property (copy) NSLocale *locale;
@property (copy) NSArray *longEraSymbols;
@property (copy) NSArray *monthSymbols;
@property (copy) NSArray *quarterSymbols;
@property (copy) NSArray *shortMonthSymbols;
@property (copy) NSArray *shortQuarterSymbols;
@property (copy) NSArray *shortStandaloneMonthSymbols;
@property (copy) NSArray *shortStandaloneQuarterSymbols;
@property (copy) NSArray *shortStandaloneWeekdaySymbols;
@property (copy) NSArray *shortWeekdaySymbols;
@property (copy) NSArray *standaloneMonthSymbols;
@property (copy) NSArray *standaloneQuarterSymbols;
@property (copy) NSArray *standaloneWeekdaySymbols;
@property (readonly) Class superclass;
@property unsigned int timeStyle;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSDate *twoDigitStartDate;
@property (copy) NSArray *veryShortMonthSymbols;
@property (copy) NSArray *veryShortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (copy) NSArray *veryShortWeekdaySymbols;
@property (copy) NSArray *weekdaySymbols;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_componentsFromFormatString:(id)arg1;
+ (id)_formatStringFromComponents:(id)arg1;
+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned int)arg2 locale:(id)arg3;
+ (unsigned int)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned int)arg2 timeStyle:(unsigned int)arg3;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;

- (id)AMSymbol;
- (id)PMSymbol;
- (id)_attributedStringWithFieldsFromDate:(id)arg1;
- (int)_cacheGenerationCount;
- (void)_clearFormatter;
- (id)_dateFormat;
- (id)_getLocaleAlreadyLocked:(BOOL)arg1;
- (void)_invalidateCache;
- (id)_locale_forOldMethods;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_reset;
- (void)_setDateFormat:(id)arg1;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(BOOL)arg2;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (id)_timeZone_forOldMethods;
- (BOOL)_tracksCacheGenerationCount;
- (BOOL)_usesCharacterDirection;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormat;
- (id)dateFromString:(id)arg1;
- (unsigned int)dateStyle;
- (void)dealloc;
- (id)defaultDate;
- (BOOL)doesRelativeDateFormatting;
- (void)encodeWithCoder:(id)arg1;
- (id)eraSymbols;
- (void)finalize;
- (unsigned int)formatterBehavior;
- (int)formattingContext;
- (BOOL)generatesCalendarDates;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (id)gregorianStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLenient;
- (id)locale;
- (id)longEraSymbols;
- (id)monthSymbols;
- (id)quarterSymbols;
- (void)receiveObservedValue:(id)arg1;
- (void)setAMSymbol:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setDoesRelativeDateFormatting:(BOOL)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (void)setFormattingContext:(int)arg1;
- (void)setGeneratesCalendarDates:(BOOL)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLenient:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTwoDigitStartDate:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (unsigned int)timeStyle;
- (id)timeZone;
- (id)twoDigitStartDate;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_formatDate:(id)arg1 shortStyle:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)monthYearStringFromDate:(id)arg1 calendar:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalSharedDateFormatter;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)FU_stringWithLongestStyleDate:(id)arg1 font:(id)arg2 maxWidth:(float)arg3;
+ (id)FU_timeFormatter;
+ (id)FU_timeStringWithSpaceRemoved:(id)arg1 date:(id)arg2;
+ (BOOL)_dateStringFits:(id)arg1 font:(id)arg2 maxWidth:(float)arg3;
+ (void)_unitPreferencesDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI

- (id)hk_stringWithAMPMSpaceRemovedFromDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)stringFromDate:(id)arg1 withRelativeToTimeZone:(id)arg2;

@end
