/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHealthKitCoachingFeatures : PBCodable <NSCopying> {
    unsigned int  _activeCalories;
    unsigned int  _automotive;
    unsigned int  _briskMinutes;
    unsigned int  _cycling;
    unsigned int  _duration;
    struct { 
        unsigned int activeCalories : 1; 
        unsigned int automotive : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int cycling : 1; 
        unsigned int duration : 1; 
        unsigned int heartRate : 1; 
        unsigned int other : 1; 
        unsigned int running : 1; 
        unsigned int unknown : 1; 
        unsigned int walking : 1; 
        unsigned int workout : 1; 
    }  _has;
    unsigned int  _heartRate;
    unsigned int  _other;
    unsigned int  _running;
    unsigned int  _unknown;
    unsigned int  _walking;
    unsigned int  _workout;
}

@property (nonatomic) unsigned int activeCalories;
@property (nonatomic) unsigned int automotive;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) unsigned int cycling;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasActiveCalories;
@property (nonatomic) BOOL hasAutomotive;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasCycling;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasHeartRate;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) BOOL hasRunning;
@property (nonatomic) BOOL hasUnknown;
@property (nonatomic) BOOL hasWalking;
@property (nonatomic) BOOL hasWorkout;
@property (nonatomic) unsigned int heartRate;
@property (nonatomic) unsigned int other;
@property (nonatomic) unsigned int running;
@property (nonatomic) unsigned int unknown;
@property (nonatomic) unsigned int walking;
@property (nonatomic) unsigned int workout;

- (unsigned int)activeCalories;
- (unsigned int)automotive;
- (unsigned int)briskMinutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cycling;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (BOOL)hasActiveCalories;
- (BOOL)hasAutomotive;
- (BOOL)hasBriskMinutes;
- (BOOL)hasCycling;
- (BOOL)hasDuration;
- (BOOL)hasHeartRate;
- (BOOL)hasOther;
- (BOOL)hasRunning;
- (BOOL)hasUnknown;
- (BOOL)hasWalking;
- (BOOL)hasWorkout;
- (unsigned int)hash;
- (unsigned int)heartRate;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)other;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)running;
- (void)setActiveCalories:(unsigned int)arg1;
- (void)setAutomotive:(unsigned int)arg1;
- (void)setBriskMinutes:(unsigned int)arg1;
- (void)setCycling:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasActiveCalories:(BOOL)arg1;
- (void)setHasAutomotive:(BOOL)arg1;
- (void)setHasBriskMinutes:(BOOL)arg1;
- (void)setHasCycling:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasHeartRate:(BOOL)arg1;
- (void)setHasOther:(BOOL)arg1;
- (void)setHasRunning:(BOOL)arg1;
- (void)setHasUnknown:(BOOL)arg1;
- (void)setHasWalking:(BOOL)arg1;
- (void)setHasWorkout:(BOOL)arg1;
- (void)setHeartRate:(unsigned int)arg1;
- (void)setOther:(unsigned int)arg1;
- (void)setRunning:(unsigned int)arg1;
- (void)setUnknown:(unsigned int)arg1;
- (void)setWalking:(unsigned int)arg1;
- (void)setWorkout:(unsigned int)arg1;
- (unsigned int)unknown;
- (unsigned int)walking;
- (unsigned int)workout;
- (void)writeTo:(id)arg1;

@end
