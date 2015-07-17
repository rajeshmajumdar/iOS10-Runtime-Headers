/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDate : NSObject <CKRecordValue, NSCopying, NSSecureCoding, PQLValuable, TSCHChartGridValue>

@property (nonatomic, readonly) NSString *briefFormattedDate;
@property (nonatomic, readonly) int chartGridValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isToday;
@property (nonatomic, readonly) BOOL isYesterday;
@property (nonatomic, readonly) NSString *shortFormattedDate;
@property (readonly) Class superclass;
@property (readonly) double timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (BOOL)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long)_cfTypeID;
- (id)addTimeInterval:(double)arg1;
- (int)compare:(id)arg1;
- (int)compare:(id)arg1 toUnitGranularity:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned int)arg2;
- (BOOL)isEqualToDate:(id)arg1;
- (BOOL)isInSameDayAsDate:(id)arg1;
- (BOOL)isInToday;
- (BOOL)isInTomorrow;
- (BOOL)isInYesterday;
- (BOOL)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (id)dateForDayInTimeZone:(id)arg1;
- (id)dateForDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForEndOfDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

- (id)_web_RFC1123DateString;
- (int)_web_compareDay:(id)arg1;
- (BOOL)_web_isToday;
- (Class)classForCoder;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)timeIntervalDescription:(double)arg1;

- (id)localTimeDescription;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (BOOL)isWholeHour;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_srGetStringFromDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

- (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)isInclusiveBetweenDate:(id)arg1 andDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (BOOL)_afui_isSameDayAsDate:(id)arg1;
- (BOOL)afui_isToday;
- (BOOL)afui_isTomorrow;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_dateByAddingDays:(int)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalDateForBeginningOfToday;
+ (id)CalDateForBeginningOfTomorrow;
+ (id)CalDateForEndOfToday;
+ (id)CalDateForEndOfTomorrow;
+ (id)CalDateForNow;
+ (id)CalSimulatedDateForNow;
+ (id)_nowComponents;
+ (id)_todayComponents;
+ (id)_tomorrowComponents;
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;
+ (int)daysSpannedFromStartDate:(id)arg1 toEndDate:(id)arg2 allDay:(BOOL)arg3 inCalendar:(id)arg4;
+ (id)nextRoundedHour;

- (id)CalDateRoundedDownToNearestMinuteIncrement:(int)arg1 inCalendar:(id)arg2;
- (BOOL)CalIsAfterDate:(id)arg1;
- (BOOL)CalIsAfterOrSameAsDate:(id)arg1;
- (BOOL)CalIsBeforeDate:(id)arg1;
- (BOOL)CalIsBeforeOrSameAsDate:(id)arg1;
- (BOOL)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_performBlockBehindDispatchSync:(id /* block */)arg1 inTimeZone:(id)arg2;
- (id)_stringWithUseAbbreviatedFormats:(BOOL)arg1 lowerCase:(BOOL)arg2;
- (id)allComponentsInCalendar:(id)arg1;
- (int)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (id)dateAtHour:(unsigned int)arg1 minute:(unsigned int)arg2 second:(unsigned int)arg3 inTimeZone:(id)arg4;
- (id)dateByAddingCalSimulatedOffset;
- (id)dateByAddingDays:(int)arg1 inCalendar:(id)arg2;
- (id)dateByAddingHours:(int)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMinutes:(int)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMonths:(int)arg1 inCalendar:(id)arg2;
- (id)dateByAddingWeeks:(int)arg1 inCalendar:(id)arg2;
- (id)dateByAddingYears:(int)arg1 inCalendar:(id)arg2;
- (id)dateBySubtractingCalSimulatedOffset;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForStartOfDayInTimeZone:(id)arg1;
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;
- (id)dateOnlyComponentsInCalendar:(id)arg1;
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;
- (id)dateRoundedDownToNearestFiveMinutesInCalendar:(id)arg1;
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;
- (int)dayInCalendar:(id)arg1;
- (int)hourInCalendar:(id)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isSameWeekAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isTodayInCalendar:(id)arg1;
- (id)localizedDateStringWithTemplate:(id)arg1;
- (id)localizedMonthAndDayStringShortened:(BOOL)arg1;
- (id)localizedMonthAndYearStringShortened:(BOOL)arg1;
- (id)localizedMonthShortened:(BOOL)arg1;
- (id)localizedRelativeDateStringShortened:(BOOL)arg1;
- (id)localizedWeekNumber;
- (id)localizedWeekdayMonthDayStringShortened:(BOOL)arg1;
- (id)localizedWeekdayMonthDayYearStringShortened:(BOOL)arg1;
- (id)localizedWeekdayMonthYearStringShortened:(BOOL)arg1;
- (id)localizedYearMonthAndDayStringShortened:(BOOL)arg1;
- (int)minuteInCalendar:(id)arg1;
- (int)monthInCalendar:(id)arg1;
- (void)printComparisonToDate:(id)arg1;
- (id)roundSecondsAndMinutesDownInCalendar:(id)arg1;
- (id)roundSecondsDownInCalendar:(id)arg1;
- (id)roundToCurrentDayInCalendar:(id)arg1;
- (id)roundToCurrentMondayInCalendar:(id)arg1;
- (id)roundToCurrentMonthInCalendar:(id)arg1;
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(int)arg2;
- (id)roundToCurrentYearInCalendar:(id)arg1;
- (int)secondInCalendar:(id)arg1;
- (id)timeOnlyComponentsInCalendar:(id)arg1;
- (id)timeStringAlwaysIncludeMinutes:(BOOL)arg1;
- (int)weekInCalendar:(id)arg1;
- (int)weekdayInCalendar:(id)arg1;
- (int)yearInCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)localizedShortTimeInTimeZone:(id)arg1;
- (id)nextDateMatchingTimeComponents;

// Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory

- (BOOL)isSameDayAsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)bod;
+ (id)eod;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)_cd_beginningOfDay;
- (id)_cd_endOfDay;
- (id)_cd_nextBeginningOfDay;
- (int)_cd_weekday;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)timeIntervalDescription:(double)arg1;

- (id)localTimeDescription;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

- (id)dateByRoundingWithTimeQuantization:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (id)sg_descriptionForMimeHeaders;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_dateFromEpoch:(long long)arg1;

- (long long)fm_epoch;
- (id)fm_epochObject;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkServerTimestamp;

- (id)_gkFormatedWhenStringWithOptions:(unsigned int)arg1;
- (id)_gkFormattedDateForStyle:(unsigned int)arg1 relative:(BOOL)arg2;
- (id)_gkServerTimestamp;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_calendar;
+ (id)geo_dateWithJulianDay:(double)arg1;

- (double)geo_hoursAndMinutes;
- (double)geo_julianDay;
- (double)geo_julianEphemerisDay;

// Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI

- (BOOL)hk_animatable;
- (id)hk_dateWithTruncatedSecond;
- (id)hk_midPointToValue:(id)arg1 percentage:(float)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)localTimeDescription;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_copyDateInCommonFormatsWithString:(id)arg1;
+ (id)mf_copyLenientDateInCommonFormatsWithString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)modificationDateForNoteBeingEdited;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)briefFormattedDate;
- (BOOL)isEarlierThanDate:(id)arg1;
- (BOOL)isLaterThanDate:(id)arg1;
- (BOOL)isToday;
- (BOOL)isYesterday;
- (id)shortFormattedDate;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tc_dateWithWordDate:(const struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;

- (void)tc_copyToWordDate:(struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)dateForTomorrow;
+ (id)dateForYesterday;
+ (id)dateWithDaysBeforeNow:(unsigned int)arg1;
+ (id)dateWithDaysFromNow:(unsigned int)arg1;

- (BOOL)isDateEqualToDateIgnoringTime:(id)arg1;
- (BOOL)isToday;
- (BOOL)isTomorrow;
- (BOOL)isYesterday;

// Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore

+ (BOOL)dateIsMidnightLocalTime:(id)arg1;
+ (id)defaultDateFormatter;
+ (id)filenameDateStringWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)monotonicDate;
+ (id)monotonicDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)nearestMidnightAfterDate:(id)arg1;
+ (id)nearestMidnightBeforeDate:(id)arg1;

- (id)convertFromBasebandToMonotonic;
- (id)convertFromMonotonicToBaseband;
- (id)convertFromMonotonicToSystem;
- (id)convertFromSystemToMonotonic;
- (BOOL)isInMonotonicFuture;
- (BOOL)isInMonotonicFutureWithDistance:(double)arg1;
- (BOOL)isInMonotonicPastWithDistance:(double)arg1;
- (double)timeIntervalSinceMonitonicNow;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_dateOfMidnightNumberOfDaysAgo:(int)arg1;

- (BOOL)safari_isInSameDayAsDate:(id)arg1;
- (BOOL)safari_isInToday;
- (BOOL)safari_isInclusivelyBetweenDate:(id)arg1 andDate:(id)arg2;
- (int)safari_numberOfWeeksUntilDate:(id)arg1;
- (id)safari_startOfDay;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)dateFromISO8601String:(id)arg1;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)dateFromString:(id)arg1;
+ (id)dateFromTWTimeString:(id)arg1;

- (id)shortDescription;
- (id)shortDescriptionSinceNow;
- (id)shortDescriptionWithTime;
- (id)shortWeekDescription;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsce_dateWithSerialNumber:(double)arg1 dateMode:(int)arg2;
+ (id)tsce_dateWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6;

- (int)chartGridValueType;
- (double)doubleValue;
- (int)tsce_day;
- (int)tsce_hour;
- (double)tsce_mapToDouble;
- (int)tsce_minute;
- (int)tsce_month;
- (int)tsce_second;
- (int)tsce_weekday;
- (int)tsce_year;
- (id)tsp_initWithMessage:(const struct Date { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1;
- (void)tsp_saveToMessage:(struct Date { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
