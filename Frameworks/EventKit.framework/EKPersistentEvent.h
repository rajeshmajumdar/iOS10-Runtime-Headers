/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEvent : EKPersistentCalendarItem {
    struct { 
        int years; 
        int months; 
        int days; 
        int hours; 
        int minutes; 
        double seconds; 
    }  _cachedDurationUnits;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) BOOL allowsParticipationStatusModifications;
@property (nonatomic) int availability;
@property (nonatomic, readonly) int birthdayID;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } durationUnits;
@property (getter=isEditable, nonatomic, readonly) BOOL editable;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (getter=isFloating, nonatomic, readonly) BOOL floating;
@property (getter=isInvitation, nonatomic, readonly) BOOL invitation;
@property (nonatomic, readonly) unsigned int invitationChangedProperties;
@property (nonatomic) unsigned int invitationStatus;
@property (getter=isMeeting, nonatomic, readonly) BOOL meeting;
@property (nonatomic) unsigned int modifiedProperties;
@property (nonatomic) BOOL needsOccurrenceCacheUpdate;
@property (nonatomic, copy) NSDate *originalStartDate;
@property (nonatomic) int participationStatus;
@property (nonatomic, readonly) int pendingParticipationStatus;
@property (nonatomic) int privacyLevel;
@property (nonatomic, copy) NSString *responseComment;
@property (nonatomic) int status;
@property (nonatomic, retain) EKPersistentSuggestedEventInfo *suggestedEventInfo;
@property (nonatomic) int travelAdvisoryBehavior;
@property (nonatomic, copy) NSNumber *travelTime;

+ (id)defaultPropertiesToLoad;
+ (id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3;
+ (id)relations;

- (id)URL;
- (void)_adjustForNewCalendar;
- (BOOL)_areDurationUnitsCached;
- (BOOL)_hasExternalIDOrDeliverySource;
- (void)_invalidateCachedDurationUnits;
- (id)actions;
- (void)addAction:(id)arg1;
- (BOOL)allowsParticipationStatusModifications;
- (int)availability;
- (int)birthdayID;
- (int)birthdayId;
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;
- (id)committedStartDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteFromOccurrenceDateOnward:(id)arg1;
- (id)description;
- (id)detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3;
- (double)duration;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })durationUnits;
- (id)endDate;
- (int)entityType;
- (id)eventIdentifier;
- (id)exportToICS;
- (void)filterExceptionDates;
- (BOOL)hasValidEventAction;
- (id)initCommon;
- (unsigned int)invitationChangedProperties;
- (unsigned int)invitationStatus;
- (BOOL)isEditable;
- (BOOL)isFloating;
- (BOOL)isInvitation;
- (BOOL)isMeeting;
- (unsigned int)modifiedProperties;
- (BOOL)needsOccurrenceCacheUpdate;
- (id)organizer;
- (id)originalStartDate;
- (int)participationStatus;
- (int)pendingParticipationStatus;
- (void)primitiveValueChangedForKey:(id)arg1;
- (int)privacyLevel;
- (BOOL)refresh;
- (void)removeAction:(id)arg1;
- (id)responseComment;
- (BOOL)responseMustApplyToAll;
- (void)setActions:(id)arg1;
- (void)setAvailability:(int)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setPrivacyLevel:(int)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setSuggestedEventInfo:(id)arg1;
- (void)setTravelAdvisoryBehavior:(int)arg1;
- (void)setTravelTime:(id)arg1;
- (void)setURL:(id)arg1;
- (int)status;
- (id)suggestedEventInfo;
- (int)travelAdvisoryBehavior;
- (id)travelTime;
- (BOOL)validate:(id*)arg1;

@end
