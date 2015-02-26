/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/timed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <timed/timed-Structs.h>
#import <timed/TMSourceManagerDelegate.h>
#import <HomeSharing/RadiosPreferencesDelegate.h>

@protocol TMTimeManager, TMTimeZoneManager;
@class TMBackgroundNtpSource, NSDictionary, NSMutableArray, RadiosPreferences;

@interface TMDaemonCore : NSObject <TMSourceManagerDelegate, RadiosPreferencesDelegate> {

	<TMTimeManager>* _systemTimeManager;
	<TMTimeManager>* _referenceTimeManager;
	<TMTimeZoneManager>* _timeZoneManager;
	TMBackgroundNtpSource* _ntpSource;
	BOOL _requiresActiveTimeZone;
	NSDictionary* _lastReferenceTime;
	BOOL _systemTimeSet;
	BOOL testedSystemTime;
	BOOL _airplaneMode;
	BOOL _timeZoneConfirmed;
	NSDictionary* lastSystemTime;
	NSMutableArray* commandHistory;
	RadiosPreferences* _radiosPrefs;
	int _simulatedMcc;
	CTServerConnectionRef _ctServerConnection;

}

@property (assign,nonatomic) BOOL systemTimeSet;                                                           //@synthesize systemTimeSet=_systemTimeSet - In the implementation block
@property (assign,nonatomic) BOOL airplaneMode;                                                            //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (assign,nonatomic) BOOL timeZoneConfirmed;                                                       //@synthesize timeZoneConfirmed=_timeZoneConfirmed - In the implementation block
@property (assign,getter=isSystemTimeZoneSet,nonatomic) BOOL systemTimeZoneSet; 
@property (nonatomic,retain) NSDictionary * lastSystemTime; 
@property (nonatomic,retain) NSDictionary * lastReferenceTime;                                             //@synthesize lastReferenceTime=_lastReferenceTime - In the implementation block
@property (assign,nonatomic) BOOL requiresActiveTimeZone;                                                  //@synthesize requiresActiveTimeZone=_requiresActiveTimeZone - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandHistory; 
@property (nonatomic,retain) RadiosPreferences * radiosPrefs;                                              //@synthesize radiosPrefs=_radiosPrefs - In the implementation block
@property (assign,nonatomic) int simulatedMcc;                                                             //@synthesize simulatedMcc=_simulatedMcc - In the implementation block
@property (assign,getter=isAutomaticTimeEnabled,nonatomic) BOOL automaticTimeEnabled; 
@property (assign,getter=isAutomaticTimeZoneEnabled,nonatomic) BOOL automaticTimeZoneEnabled; 
@property (assign,nonatomic) BOOL testedSystemTime; 
@property (assign,nonatomic) CTServerConnectionRef ctServerConnection;                                     //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (assign,nonatomic) BOOL firstRun; 
-(void)setRadiosPrefs:(id)arg1 ;
-(id)radiosPrefs;
-(id)commandHistory;
-(void)executeCommand:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(id)initWithSystemRules:(id)arg1 referenceRules:(id)arg2 timeZoneRules:(id)arg3 ;
-(void)setSourceTime:(id)arg1 ;
-(void)setSourceAvailable:(id)arg1 ;
-(void)setSourceUnavailable:(id)arg1 ;
-(void)sourceManager:(id)arg1 didComputeResult:(id)arg2 ;
-(void)sourceManager:(id)arg1 shouldFetch:(id)arg2 ;
-(void)setSourceTimeZone:(id)arg1 ;
-(void)resetTimeZone:(id)arg1 ;
-(void)powerOn:(id)arg1 ;
-(BOOL)testedSystemTime;
-(void)testAndApplyNewSystemTime;
-(id)cacheUrl;
-(void)setSimulatedMcc:(int)arg1 ;
-(BOOL)firstRun;
-(void)setTimeZoneConfirmed:(BOOL)arg1 ;
-(void)setFirstRun:(BOOL)arg1 ;
-(void)setLastSystemTime:(id)arg1 ;
-(void)setCommandHistory:(id)arg1 ;
-(void)handleInternalMessage:(id)arg1 ;
-(void)handleShutdown:(id)arg1 ;
-(void)setSystemTimeSet:(BOOL)arg1 ;
-(void)checkActiveTimeSourceRequired;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(BOOL)shouldDisplayTimeZonePopup;
-(void)setSystemTimeZoneSet:(BOOL)arg1 ;
-(id)prefsValueForTimeZone:(id)arg1 ;
-(void)sendSystemTimeChangeNotification;
-(void)setTestedSystemTime:(BOOL)arg1 ;
-(double)propagateTime:(id)arg1 ;
-(BOOL)shouldSetSystemTime;
-(void)setSystemTime:(double)arg1 fromSource:(const char*)arg2 ;
-(BOOL)shouldSetSystemTimeZone;
-(BOOL)isSameAsSystemTimeZone:(id)arg1 ;
-(BOOL)isSystemTimeZoneSet;
-(BOOL)setSystemTimeZone:(id)arg1 source:(const char*)arg2 ;
-(void)setRequiresActiveTimeZone:(BOOL)arg1 ;
-(BOOL)timeZoneConfirmed;
-(BOOL)systemTimeSet;
-(id)lastSystemTime;
-(id)lastReferenceTime;
-(void)setAutomaticTimeEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticTimeEnabled;
-(void)setAutomaticTimeZoneEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticTimeZoneEnabled;
-(BOOL)isTimeZoneConfirmed:(id)arg1 ;
-(id)referenceTime;
-(void)setReferenceTimeUnreliable:(id)arg1 ;
-(id)isLocationTimeZoneActive;
-(void)provideNetworkTimeZone:(id)arg1 ;
-(void)airplaneModeChanged:(id)arg1 ;
-(void)setupTime:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setupTimeZone:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)resetToFirstLaunch:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setSimulatedMcc:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)pushBackCommand:(id)arg1 ;
-(void)cacheStateToDisk;
-(void)_setupTimeWithHandler:(/*^block*/ id)arg1 ;
-(void)checkActiveTimeZoneSourceRequired;
-(void)setLastReferenceTime:(id)arg1 ;
-(id)propagatedTimeDictionaryFromDictionary:(id)arg1 ;
-(BOOL)fetchTimeFromNetwork:(BOOL)arg1 ;
-(int)simulatedMcc;
-(BOOL)timeDictionary:(id)arg1 isEqualToTimeDictionary:(id)arg2 ;
-(void)sendReferenceTimeChangeNotification;
-(void)testAndApplyNewSystemTimeZone:(id)arg1 ;
-(id)tempPath;
-(BOOL)requiresActiveTimeZone;
-(int)mobileCountryCode;
-(void)dealloc;
-(id)init;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(void)airplaneModeChanged;
-(BOOL)airplaneMode;
-(void)emptyCache;
@end
