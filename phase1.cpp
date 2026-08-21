#include "phase1.h"
#include <cmath> // برای توابعی مثل exp و ln در آینده به کارتان می‌آید

// ==========================================
// 1. Soil Physics and Moisture
// ==========================================

double calcVolumetricMoisture(double w, double rho_b) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcPorosity(double rho_b, double rho_s) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcSaturationPercentage(double vwc, double porosity) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcTotalSoilWaterPotential(double psi_g, double psi_m, double psi_p, double psi_o) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

// ==========================================
// 2. Meteorology and Evapotranspiration
// ==========================================

double calcRadiationEquivalentEvaporation(double R) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcSaturationVaporPressure(double T) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcMeanDailySaturationVaporPressure(double t_max, double t_min) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcVaporPressureCurveSlope(double T, double e_sat) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcPsychrometricConstant(double P) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcActualVaporPressure(double t_min, double t_max, double rh_min, double rh_max) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcCorrectedWindSpeed(double u_z, double z) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcHargreavesET0(double t_mean, double t_max, double t_min, double R_a) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcHargreavesColdSemiArid(double t_mean, double t_max, double t_min, double R_a) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcHargreavesWarmSemiArid(double t_mean, double t_max, double t_min, double R_a) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

// ==========================================
// 3. Soil Water Balance & Irrigation
// ==========================================

double calcTAW(double theta_fc, double theta_wp, double z_r) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcRAW(double p, double taw) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcAdjustedDepletionFraction(double p_table, double et_c) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcDailyMoistureDeficit(double d_prev, double P_i, double RO_i, double I_i, double CR_i, double et_c_i, double DP_i) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcManagementAllowedDepletion(double mad_percent, double awc, double d_rz) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcDeepPercolation(double P_i, double RO_i, double I_i, double et_c_i, double d_prev) {
    // TODO: پیاده‌سازی فرمول
    // دقت کنید که در اینجا باید شرط منفی نشدن مقدار را هم پیاده کنید (if < 0 return 0)
    return 0.0;
}

// ==========================================
// 4. Stress and Yield Models
// ==========================================

double calcWaterStressCoeff(double taw, double d_r, double p) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcSalinityYieldReduction(double b, double ec_e, double ec_threshold) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcSalinityStressCoeff(double b, double k_y, double ec_e, double ec_threshold) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcCombinedStressCoeff(double b, double k_y, double ec_e, double ec_threshold, double taw, double d_r, double p) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}

double calcECeFromLeachingFraction(double ec_iw, double LF) {
    // TODO: پیاده‌سازی فرمول
    return 0.0;
}