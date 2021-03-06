/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureView_Phone.h>

@class UIView, UIDatePicker, NSLayoutConstraint;

@interface TimeRestrictionFeatureView : GAXFeatureView_Phone {

	UIView* _topShelfContainer;
	UIDatePicker* _datePicker;
	NSLayoutConstraint* _datePickerZeroHeightConstraint;
	NSLayoutConstraint* _detailTextZeroHeightConstraint;

}

@property (nonatomic,retain) UIView * topShelfContainer;                                       //@synthesize topShelfContainer=_topShelfContainer - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                        //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * datePickerZeroHeightConstraint;              //@synthesize datePickerZeroHeightConstraint=_datePickerZeroHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailTextZeroHeightConstraint;              //@synthesize detailTextZeroHeightConstraint=_detailTextZeroHeightConstraint - In the implementation block
-(void)_applyAutolayoutConstraintsWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(void)_constructViewHierarchyWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 initialDuration:(long long)arg8 ;
-(void)setDatePickerZeroHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailTextZeroHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopShelfContainer:(UIView *)arg1 ;
-(void)_handleDatePickerValueDidChange:(id)arg1 ;
-(UIView *)topShelfContainer;
-(void)_adjustLayoutConstraintsToShowDatePicker:(BOOL)arg1 ;
-(NSLayoutConstraint *)datePickerZeroHeightConstraint;
-(NSLayoutConstraint *)detailTextZeroHeightConstraint;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)dealloc;
-(void)_handleValueChanged:(id)arg1 ;
@end

