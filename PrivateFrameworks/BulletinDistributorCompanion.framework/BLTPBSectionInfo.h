/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSectionInfo : PBCodable <NSCopying> {
    unsigned int  _alertType;
    BOOL  _allowsNotifications;
    NSString * _displayName;
    BOOL  _displaysCriticalBulletins;
    NSString * _factorySectionID;
    struct { 
        unsigned int alertType : 1; 
        unsigned int notificationCenterLimit : 1; 
        unsigned int pushSettings : 1; 
        unsigned int sectionCategory : 1; 
        unsigned int sectionType : 1; 
        unsigned int subsectionPriority : 1; 
        unsigned int suppressedSettings : 1; 
        unsigned int version : 1; 
        unsigned int allowsNotifications : 1; 
        unsigned int displaysCriticalBulletins : 1; 
        unsigned int iconsStripped : 1; 
        unsigned int showsInLockScreen : 1; 
        unsigned int showsInNotificationCenter : 1; 
        unsigned int showsMessagePreview : 1; 
        unsigned int showsOnExternalDevices : 1; 
        unsigned int suppressFromSettings : 1; 
    }  _has;
    BLTPBSectionIcon * _icon;
    BOOL  _iconsStripped;
    unsigned int  _notificationCenterLimit;
    unsigned int  _pushSettings;
    int  _sectionCategory;
    NSString * _sectionID;
    int  _sectionType;
    BOOL  _showsInLockScreen;
    BOOL  _showsInNotificationCenter;
    BOOL  _showsMessagePreview;
    BOOL  _showsOnExternalDevices;
    NSString * _subsectionID;
    int  _subsectionPriority;
    NSMutableArray * _subsections;
    BOOL  _suppressFromSettings;
    unsigned int  _suppressedSettings;
    NSString * _universalSectionID;
    unsigned int  _version;
}

@property (nonatomic) unsigned int alertType;
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) BOOL displaysCriticalBulletins;
@property (nonatomic, retain) NSString *factorySectionID;
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic) BOOL hasAllowsNotifications;
@property (nonatomic, readonly) BOOL hasDisplayName;
@property (nonatomic) BOOL hasDisplaysCriticalBulletins;
@property (nonatomic, readonly) BOOL hasFactorySectionID;
@property (nonatomic, readonly) BOOL hasIcon;
@property (nonatomic) BOOL hasIconsStripped;
@property (nonatomic) BOOL hasNotificationCenterLimit;
@property (nonatomic) BOOL hasPushSettings;
@property (nonatomic) BOOL hasSectionCategory;
@property (nonatomic, readonly) BOOL hasSectionID;
@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) BOOL hasShowsInLockScreen;
@property (nonatomic) BOOL hasShowsInNotificationCenter;
@property (nonatomic) BOOL hasShowsMessagePreview;
@property (nonatomic) BOOL hasShowsOnExternalDevices;
@property (nonatomic, readonly) BOOL hasSubsectionID;
@property (nonatomic) BOOL hasSubsectionPriority;
@property (nonatomic) BOOL hasSuppressFromSettings;
@property (nonatomic) BOOL hasSuppressedSettings;
@property (nonatomic, readonly) BOOL hasUniversalSectionID;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic, retain) BLTPBSectionIcon *icon;
@property (nonatomic) BOOL iconsStripped;
@property (nonatomic) unsigned int notificationCenterLimit;
@property (nonatomic) unsigned int pushSettings;
@property (nonatomic) int sectionCategory;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sectionType;
@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic, retain) NSString *subsectionID;
@property (nonatomic) int subsectionPriority;
@property (nonatomic, retain) NSMutableArray *subsections;
@property (nonatomic) BOOL suppressFromSettings;
@property (nonatomic) unsigned int suppressedSettings;
@property (nonatomic, retain) NSString *universalSectionID;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)addSubsections:(id)arg1;
- (unsigned int)alertType;
- (BOOL)allowsNotifications;
- (void)clearSubsections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (BOOL)displaysCriticalBulletins;
- (id)factorySectionID;
- (BOOL)hasAlertType;
- (BOOL)hasAllowsNotifications;
- (BOOL)hasDisplayName;
- (BOOL)hasDisplaysCriticalBulletins;
- (BOOL)hasFactorySectionID;
- (BOOL)hasIcon;
- (BOOL)hasIconsStripped;
- (BOOL)hasNotificationCenterLimit;
- (BOOL)hasPushSettings;
- (BOOL)hasSectionCategory;
- (BOOL)hasSectionID;
- (BOOL)hasSectionType;
- (BOOL)hasShowsInLockScreen;
- (BOOL)hasShowsInNotificationCenter;
- (BOOL)hasShowsMessagePreview;
- (BOOL)hasShowsOnExternalDevices;
- (BOOL)hasSubsectionID;
- (BOOL)hasSubsectionPriority;
- (BOOL)hasSuppressFromSettings;
- (BOOL)hasSuppressedSettings;
- (BOOL)hasUniversalSectionID;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (id)icon;
- (BOOL)iconsStripped;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)notificationCenterLimit;
- (unsigned int)pushSettings;
- (BOOL)readFrom:(id)arg1;
- (int)sectionCategory;
- (id)sectionID;
- (int)sectionType;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAllowsNotifications:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletins:(BOOL)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setHasAlertType:(BOOL)arg1;
- (void)setHasAllowsNotifications:(BOOL)arg1;
- (void)setHasDisplaysCriticalBulletins:(BOOL)arg1;
- (void)setHasIconsStripped:(BOOL)arg1;
- (void)setHasNotificationCenterLimit:(BOOL)arg1;
- (void)setHasPushSettings:(BOOL)arg1;
- (void)setHasSectionCategory:(BOOL)arg1;
- (void)setHasSectionType:(BOOL)arg1;
- (void)setHasShowsInLockScreen:(BOOL)arg1;
- (void)setHasShowsInNotificationCenter:(BOOL)arg1;
- (void)setHasShowsMessagePreview:(BOOL)arg1;
- (void)setHasShowsOnExternalDevices:(BOOL)arg1;
- (void)setHasSubsectionPriority:(BOOL)arg1;
- (void)setHasSuppressFromSettings:(BOOL)arg1;
- (void)setHasSuppressedSettings:(BOOL)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconsStripped:(BOOL)arg1;
- (void)setNotificationCenterLimit:(unsigned int)arg1;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setSectionCategory:(int)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionType:(int)arg1;
- (void)setShowsInLockScreen:(BOOL)arg1;
- (void)setShowsInNotificationCenter:(BOOL)arg1;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (void)setShowsOnExternalDevices:(BOOL)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setSubsectionPriority:(int)arg1;
- (void)setSubsections:(id)arg1;
- (void)setSuppressFromSettings:(BOOL)arg1;
- (void)setSuppressedSettings:(unsigned int)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (BOOL)showsInLockScreen;
- (BOOL)showsInNotificationCenter;
- (BOOL)showsMessagePreview;
- (BOOL)showsOnExternalDevices;
- (id)subsectionID;
- (int)subsectionPriority;
- (id)subsections;
- (id)subsectionsAtIndex:(unsigned int)arg1;
- (unsigned int)subsectionsCount;
- (BOOL)suppressFromSettings;
- (unsigned int)suppressedSettings;
- (id)universalSectionID;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
