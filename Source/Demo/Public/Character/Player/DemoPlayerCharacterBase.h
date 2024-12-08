#pragma once

#include "CoreMinimal.h"
#include "Character/DemoCharacterBase.h"
#include "Player/DemoPlayerState.h"
#include "DemoPlayerCharacterBase.generated.h"

UCLASS()
class DEMO_API ADemoPlayerCharacterBase : public ADemoCharacterBase
{
	GENERATED_BODY()

public:
	ADemoPlayerCharacterBase(const class FObjectInitializer& ObjectInitializer);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

	class USpringArmComponent* GetCameraBoom();

	class UCameraComponent* GetFollowCamera();

	UFUNCTION(BlueprintCallable, Category = "Demo|Camera")
	float GetStartingCameraBoomArmLength();

	UFUNCTION(BlueprintCallable, Category = "Demo|Camera")
	FVector GetStartingCameraBoomLocation();

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Demo|Camera")
	float BaseTurnRate = 45.0f;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Demo|Camera")
	float BaseLookUpRate = 45.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Demo|Camera")
	float StartingCameraBoomArmLength;

	UPROPERTY(BlueprintReadOnly, Category = "Demo|Camera")
	FVector StartingCameraBoomLocation;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Demo|Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Demo|Camera")
	class UCameraComponent* FollowCamera;

	FGameplayTag DeadTag;

	virtual void BeginPlay() override;

	void LookUp(float Value);

	void LookUpRate(float Value);

	void Turn(float Value);

	void TurnRate(float Value);

	void MoveForward(float Value);

	void MoveRight(float Value);

	void UpdateMeshRotation(float ForwardValue, float RightValue);

	virtual void OnRep_PlayerState() override;

	void BindASCInput();

	void InitializeStartingValues(ADemoPlayerState* PS);

	UFUNCTION()
	void OnRep_MeshRotation();

	UPROPERTY(ReplicatedUsing = OnRep_MeshRotation)
	FRotator ReplicatedMeshRotation;

private:
	bool ASCInputBound = false;

	void InitHUD() const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
