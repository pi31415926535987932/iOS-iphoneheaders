/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/PhoneViewController.h>
#import <AddressBookUI/ABNewPersonViewControllerDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <FaceTime/DialerViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <SpringBoardUI/TPDialerKeypadDelegate.h>

@class PHAbstractDialerView, UINavigationController, NSTimer, NSString;

@interface DialerController : PhoneViewController <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, DialerViewDelegate, UIActionSheetDelegate, TPDialerKeypadDelegate> {

	PHAbstractDialerView* _dialerView;
	UINavigationController* _newContactNavigationController;
	NSTimer* _deleteTimer;
	NSTimer* _lookupTimer;
	NSString* _lastDialedNumberCache;
	NSString* _myPrefix;
	int _shouldUseMyPrefixAsHint;
	unsigned _calledNumber : 1;
	unsigned _didDeleteRepeat : 1;
	unsigned _dtmfPlaying;
	BOOL _shouldHideDeleteButtonWhenEmpty;
	int _dialerType;

}

@property (readonly) PHAbstractDialerView * dialerView;                         //@synthesize dialerView=_dialerView - In the implementation block
@property (assign,nonatomic) BOOL shouldHideDeleteButtonWhenEmpty;              //@synthesize shouldHideDeleteButtonWhenEmpty=_shouldHideDeleteButtonWhenEmpty - In the implementation block
@property (retain) NSString * lastDialedNumber; 
@property (assign) int dialerType;                                              //@synthesize dialerType=_dialerType - In the implementation block
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconName;
+(int)tabViewType;
+(id)tabBarIconImageName;
+(void)stopPlayingDTMFTone;
+(void)playDTMFToneForKey:(unsigned char)arg1 ;
+(id)defaultPNGName;
+(BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2 ;
+(BOOL)launchFieldTestIfNeeded:(id)arg1 ;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(int)dialerType;
-(void)setDialerType:(int)arg1 ;
-(id)initWithDialerType:(int)arg1 ;
-(void)_deleteButtonClicked:(id)arg1 ;
-(void)_addButtonClicked:(id)arg1 ;
-(void)_callButtonPressed:(id)arg1 ;
-(void)_deleteButtonDown:(id)arg1 ;
-(void)_stopDeleteTimer;
-(void)_callButtonLongPress;
-(void)_hideNewContactView;
-(BOOL)isShowingDoubleHeightStatusBar;
-(void)_stopLookupTimer;
-(void)_clearDisplayIfNecessary;
-(void)_statusBarHeightChanged:(id)arg1 ;
-(void)_updateName;
-(void)_getPersonName:(id*)arg1 personLabel:(id*)arg2 personUID:(int*)arg3 forPhoneNumberString:(id)arg4 ;
-(BOOL)_shouldUseMyPrefixAsHint;
-(id)_myPrefix;
-(BOOL)shouldHideDeleteButtonWhenEmpty;
-(id)dialerView;
-(void)_updateCallButtonEnabledState:(id)arg1 updateNameNow:(BOOL)arg2 ;
-(void)_updateCallButtonEnabledState:(id)arg1 ;
-(void)_updateLCDNameLabelWithAMatchingName:(BOOL)arg1 ;
-(void)setLastDialedNumber:(id)arg1 ;
-(id)lastDialedNumber;
-(void)_phonePad:(id)arg1 appendString:(id)arg2 suppressClearingDialedNumber:(BOOL)arg3 ;
-(void)_dialVoicemail;
-(void)phonePad:(id)arg1 appendString:(id)arg2 playDTMFTone:(BOOL)arg3 ;
-(id)_qualifyNumberIfNecessary:(id)arg1 ;
-(void)_addToNewContact;
-(void)_showNewContactView;
-(void)_addToExistingContact;
-(void)_dismissNewContactView:(BOOL)arg1 ;
-(void)_deleteRepeat;
-(void)_startDeleteTimer;
-(void)dialerViewTextDidChange:(id)arg1 ;
-(void)dialerView:(id)arg1 stringWasPasted:(id)arg2 ;
-(void)setShouldHideDeleteButtonWhenEmpty:(BOOL)arg1 ;
-(void)_updateLCDNameLabelWithOriginallyPastedString:(id)arg1 ;
-(void)performCharacterAddAction:(id)arg1 ;
-(void)performCallAction;
-(void)performDeleteAction;
-(void)_handleSIMInsertionOrRemoval;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)applicationDidResume;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)unloadView;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void*)_newPersonWithValue:(id)arg1 forMultiValueProperty:(int)arg2 ;
-(void)phonePad:(id)arg1 appendString:(id)arg2 ;
-(void)phonePad:(id)arg1 keyDown:(BOOL)arg2 ;
-(void)phonePad:(id)arg1 keyUp:(BOOL)arg2 ;
-(void)phonePadDidEndSounds:(id)arg1 ;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 ;
-(void)phonePadDeleteLastDigit:(id)arg1 ;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2 ;
@end

